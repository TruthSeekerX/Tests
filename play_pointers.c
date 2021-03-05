#include<stdio.h>
#include<stdint.h>

int main(int argc, char *arg[]){
//	uint32_t number[2]={5,7};
//	ptr=number;		//equivalent as ptr=&number[0]; the name of a array is equivalent of the address of the first element of the array 

	uint32_t number=77;

//	uint32_t *ptr=&number;			//It is essential to initialise the pointer by point it to a variable.	

	uint16_t *ptr=(uint16_t *)&number;	//cast number as uint16_t type

	*ptr=2;			//assign value 2 to the address that pointer ptr points to
	ptr++;			//move the pointer forward by 1 step which is 16 bits in this case
	*ptr=5;
	
	printf("Number is: %d \n",number);
	printf("The address *ptr is pointing to is: %p\n",ptr);

	
//	printf("Number is: %d \n",*(ptr+1));	//*(ptr+1) returns the value of the address of ptr+1
	
	return 0;
}
