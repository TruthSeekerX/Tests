#include <stdio.h>
#include <stdint.h>

uint8_t a=2;
//static uint8_t a=2;


int main(int argc, char * argv[]){
	printf("first a in the main before for loop is:%d\n",a);
	for(uint8_t i=1;i<2;i++){
		printf("first a in the for loop is:%d\n",a);
		
	//	uint8_t a=3;
	//	static uint8_t a=3;
		a=3;
		
		printf("second a in the for loop is:%d\n",a);
	}
	
	printf("second a in the main after for loop is:%d\n",a);
	
	a=4;

	printf("third a in the main is:%d\n",a);

	return 0;
}
