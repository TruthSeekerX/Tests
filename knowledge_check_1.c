//some comments
#include <stdio.h>
#include <stdint.h>

float div_num();
int main(int argv, char argc[]){
	float a,b,r;
	printf("Please input number a,b (be aware to seperate them with ",")for calculating the result of a/b:\n");
	scanf("%f,%f",a,b);
	r=div_num(a,b);
	printf("The result of %f/%f is:%f",a,b,r);
}

float div_num(float num_1,float num_2){
	float r;
	if(num_2!=0){
	r=num_1/num_2}else{
		printf("error! Number b cannot be 0!");
	}
}