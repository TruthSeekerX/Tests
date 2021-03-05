#include <stdio.h>
#include <stdint.h>
#include <string.h>

float InvSqrt(float x);

int main(int argv, char *argc[]){
	float a=64.0,res;
//	printf("Type a number and press enter:");
//	scanf("%g",&a);
	res=InvSqrt(a);
	printf("The squre root of input number is: %g\n",res);

	return 0;
}

float InvSqrt(float x){ 
    

   float xhalf = 0.5f * x; 

//int32_t i = *(int*)&x;			// store floating-point bits in integer 
  	int32_t i=memcpy(&i, &x, 4);
        i = 0x5f3759df - (i >> 1);	// initial guess for Newton's method 
        x = *(float*)&i;		// convert new bits into float 
        x = x*(1.5f - xhalf*x*x);	// One round of Newton's method 
        return x; 
    } 
