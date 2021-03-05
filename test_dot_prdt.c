#include<stdio.h>
#include<stdint.h>

double dot_prdt(double *array1,double *array2,uint8_t size);	

int main(void){
	double snptc_wghts[3]={0.1,0.2,0.3};
	double	trn_inpts[4][3] = {{1,1,1},{2,2,2},{3,3,3},{1,2,3}};

	for(uint8_t i=0;i<4;i++){
		double outputs[4];

		outputs[i] = dot_prdt(trn_inpts[i], snptc_wghts, 3);
		printf("The output%hhd is: %lf \n",i,outputs[i]);
		
//		ptr_trn_inpts += i*3;
//		outputs[i] = sigmoid(dot_prdt(ptr_trn_inpts, snptc_wghts, 3));
		}
	}

double dot_prdt(double *array1,double *array2,uint8_t size){
	double p=0;
	for(uint8_t i=0;i<size;i++){
		p+=array1[i]*array2[i];
	}
	return p;
}
