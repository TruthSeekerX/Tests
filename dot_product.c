/**************************************
* Dot product 
*
*
***************************************/

#include<stdio.h>
#include<stdint.h>

double dot_product(double *array1,double *array2,uint8_t size);

int main(int argc, char *argv[]){
	double v1[]={1,2,3,4,5};
	double v2[]={1,2,3,4,5};
	
	uint8_t size=sizeof(v1)/sizeof(v1[0]);
	
	double prdt=dot_product(v1,v2,size);
	
	printf("The size of the vectors are: %hhd\n",size);
	printf("The dot product of the vectors are %lf\n",prdt);
	
	return 0;
}

double dot_product(double *array1,double *array2,uint8_t size){
	double p=0;
	for(uint8_t i=0;i<size;i++){
		p+=array1[i]*array2[i];
		printf("i=%hhd,p=%lf\n",i,p);
	}
	return p;
}