#include <stdio.h>	//header
#include <stdint.h> //header

int main(int argc, char *argv[]){
	
	char rx_1,rx_2,rx_3;
	printf("enter a 3 digit number");
	printf("and press return:");
	
	rx_1=getc(stdin);
	rx_2=getc(stdin);
	rx_3=getchar();
	
	/*
	uint16_t num_1=(rx_1-48)*100;	// covert characters into interger
	uint16_t num_2=(rx_2-48)*10;
	uint16_t num_3=rx_3-48;
	uint16_t sum=num_1+num_2+num_3;
	*/
	uint16_t sum=(rx_1-48)*100+(rx_2-48)*10+(rx_3-48);
	
	float res=sum/2.00;		//be aware int/int is always int,
							//hence instead of 2 we need 2.00
							//be aware signed and unsigned numbers
	
	printf("result= %f\n",res);
	
	
	return 0;
	
}