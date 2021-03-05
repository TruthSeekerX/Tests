/********************************************************************************************
* Project: Newton Raphson Method of calculate squre root.
* Author: Siyuan Xu e2002077
* Objectives:
* 1. Study floating point numbers
* 2. Study pointers
* 3. Study Newton Raphson method
*********************************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

double nr_sqr_p(double x, float p);
double nr_sqr_t(double x, uint16_t t);

int main(){
	double num;
	float presicion;
	uint16_t iterations;
	
	printf("Please input a number and precision(ex. 555,0.0001):\n");
	scanf("%lf, %f",&num, &presicion);
	printf("The squreroot by nr_sqr_ p of the number is: %lf\n.",nr_sqr_p(num,presicion));
//	printf("And it iterates %d times.",*c);			//Here I tried to access the iteration counts by a pointer, however I don't remember how Johan you did it anymore. I do know variable scope is wrong.  


	printf("Please input a number and iteration times(ex. 555,100):\n");
	scanf("%lf,%hd",&num,&iterations);
	printf("The squreroot by nr_sqr_ t of the number is: %lf\n.",nr_sqr_t(num,iterations));
	
	return 0;
}

double nr_sqr_p(double x,float p){
/********************************************************************************************
*Function:  doube nr_sqr_p(double x, float p)
*Input:     double x, the number be be squrerooted; float p, presicion  while doing Newton Raphson Method 
*Output:    return r, the result
*Procedure: iteration so many times of Newton Raphson formular untill f(x) is less than the presicion.
*
*********************************************************************************************/

	double r,Xn=1;
	uint32_t i=0;
//	int *c;				
	
	while(1){
		
			Xn=0.5*(Xn+(x/Xn));  //Calculate the new aprroximation with Newton Raphson Method  Xn=0.5*(Xn-1+a/Xn-1)
		
			i++;
//			c=&i;			Here I tried to access the iteration counts by a pointer, however I don't remember how Johan you did it anymore.
			
			if (abs(Xn*Xn-x)<p) break;	//stops the loop when the the differences between the squre of the new guess Xn and the input number is less than the precision
		
			r=Xn;
		}
	printf("nr_sqr_p iterated %d times.",i);
	return r;
}

double nr_sqr_t(double x, uint16_t t){
/********************************************************************************************
*Function:  doube nr_sqr_t(double x, unint16_t t)
*Input:     double x, the number be be squrerooted; uint_t t, the number of iterations times while doing Newton Raphson Method 
*Output:    return r, the result
*Procedure: iteration t times of Newton Raphson formular
*
*********************************************************************************************/

	double r,Xn=x;
	uint16_t i=0;
	
		for(i;i<t;i++){
			Xn=0.5*(Xn+(x/Xn));  //Calculate the new aprroximation with Newton Raphson Method  Xn=0.5*(Xn-1+a/Xn-1)
		
			r=Xn;
		}
	return r;
}
