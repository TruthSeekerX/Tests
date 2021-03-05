/**************************************
* AI Test
*
*
***************************************/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

double snptc_wghts[3];		//global variable for synaptic weights

double dot_prdt(double *array1,double *array2,uint8_t size);		//double *array1 is equivalent of double array1[]. The value is the address of the first element of the array.

double sigmoid(double x);

double sigmoid_d(double x);

void train(double trn_inpts[][3],double trn_otpts[],uint32_t iterations);

int main(int argc, char *argv[]){
	
	srand(time(NULL));	//NULL is equivalent as 0 here. srand initialise the sudo-random function with base of time() function.
	
	snptc_wghts[0]=2.0 * (float)rand() / RAND_MAX -1.0;		//normalise the sudo-random number between [-1,1]. And store the value to snptc_wghts[]
	snptc_wghts[1]=2.0 * (float)rand() / RAND_MAX -1.0;
	snptc_wghts[2]=2.0 * (float)rand() / RAND_MAX -1.0;
	
	double	trn_inpts[4][3] = {{0.0,0.5,1},{0.5,0,0},{0.9,0.1,0.1},{0.5,0.9,0.9}};
	double	trn_otpts[4]={0,1,1,0};
	uint32_t itrt;
	
	printf("How many time of iterations would you like to train?\n");
	scanf(" %ud", &itrt);
	
	train(trn_inpts, trn_otpts, itrt); 		//calling train() function
	
	return 0;
}

double dot_prdt(double *array1,double *array2,uint8_t size){
	double p=0;
	for(uint8_t i=0;i<size;i++){
		p+=array1[i]*array2[i];
	}
	return p;
}

double sigmoid(double x){

	/**********************************************************************
	*****************
	*Function : float sigmoid(float x)
	*Input    : float number x
	*Output   : Return r, the result
	*Procedure: Calculate the value of sigmoid function f(x)=1/(1+e^(-x))
	*           according to input x
	************************************************************************
	****************/
	double r;
	r=1/(expf(-x)+1);		//Formula of sigmoid function
	
	return r;
}

double sigmoid_d(double x){

	/**********************************************************************
	*****************
	*Function : double sigmoid_d(double x)
	*Input    : double number x
	*Output   : Return r, the result
	*Procedure: Calculate the derivative of sigmoid function f(x)=1/(1+e^(-x))
	*           according to input x
	************************************************************************
	****************/
	double r;
	r=sigmoid(x)*(1-sigmoid(x));	//Formula of the derivative of function sigmoid()
	
	return r;
}

void train(double trn_inpts[][3],double trn_otpts[],uint32_t iterations){
	
	double outputs[4];
	double error[4];
	double trs_trn_inpts[3][4];
	double *ptr_trn_inpts;
	ptr_trn_inpts = trn_inpts[0];
	
	for(uint32_t i=0;i<iterations;i++){
		for(uint8_t j=0;j<4;j++){
		/**************************************************************
		think_train(traning_set_inputs,output);
		--> dot product input * weight
		--> output[]: pass the result of the above though sigmoid()
		**************************************************************/

			outputs[j] = sigmoid(dot_prdt(trn_inpts[j], snptc_wghts, 3));
//			printf("    outputs[%hhd] is: %9lf |",j,outputs[j]);
			
//			ptr_trn_inpts += j*3;
//			outputs[j] = sigmoid(dot_prdt(ptr_trn_inpts, snptc_wghts, 3));
		}
//		printf("\n");
		
		for(uint8_t j=0;j<4;j++){
		/**************************************************************
		calculate error[]
		--> trn_otpts - output
		--> multiply error with sigmoid_derivative of the output
		**************************************************************/		
		
		error[j] = (trn_otpts[j] - outputs[j]) * sigmoid_d(outputs[j]);
//		printf("      error[%hhd] is: %9lf |",j,error[j]);
		}
//		printf("\n");
		
		for(uint8_t r = 0;r < 4;r++){
		/**************************************************************
		Transpose trn_inpts
		--> because inputs per color group dot product with error gives the adjustments
		--> add the adjustments to the synaptic weights
		**************************************************************/		
			for(uint8_t c=0;c<3;c++){
				trs_trn_inpts[c][r]=trn_inpts[r][c];
			}	
		}
		
//		ptr_trn_inpts = trn_inpts[0];
		
		for(uint8_t k = 0;k < 3; k++){
//		ptr_trn_inpts += k*4;
//		snptc_wghts[k] += dot_prdt(ptr_trn_inpts,error,4);

		double adjmnts=dot_prdt(trs_trn_inpts[k],error,4);
		snptc_wghts[k] += adjmnts;
		
//		snpt_wghts[k] += dot_prdt(trs_trn_inpts[k],error,4);
		
//		printf("adjustments[%hhd] is: %9lf |",k,adjmnts);
//		printf("snptc_wghts[%hhd] is: %9lf |",k,snptc_wghts[k]);
		}
		
//		printf("\n");
		printf("-------------------------------------------------------------------------------------------------------------------------\n");
	printf("error:   %9lf, %9lf, %9lf, %9lf \n", error[0],error[1],error[2],error[3]);
	printf("outputs: %9lf, %9lf, %9lf, %9lf \n", outputs[0],outputs[1],outputs[2],outputs[3]);
	printf("wghts  : %9lf, %9lf, %9lf \n", snptc_wghts[0],snptc_wghts[1],snptc_wghts[2]);
	}
}
