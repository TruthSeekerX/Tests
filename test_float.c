/********************************************************************************************
* This is meant for testing how floating points number and interger number works.
* Objectives:
* 1. Study floating point numbers
* 2. Study pointers
*********************************************************************************************/

#include <stdio.h>

int main(){
	float a = 15.5;			//
	int b = *(int*)&a;
	
	b>>1;
	
	printf("a=%f, b=%d\n",a,b);
	
	return 0;
}
