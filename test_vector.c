#include<stdio.h>
#include<stdint.h>

int main(int argc, char *arg[]){
	double v1[3]={1,2,3};
	double v2[3]={1,2,3};
	double prdt=0;
	
	for(uint8_t i=0;i < 3;i++){
	prdt += v1[i]*v2[i];
	}
	
	printf("the dot product of vectors v1 and v2 are:%lf\n",prdt);
	
	return 0;
}