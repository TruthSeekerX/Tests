#include <stdio.h>
#include <stdint.h>

uint8_t func_test(int8_t input);

int main()
{

	char usr_in;

	do{
		int8_t a,b;
	
		printf("Plese input an integer between [-128,127] and press enter\n");
		scanf("%hhd",&a);
		b=func_test(a);
		printf("return of the func_test is %hhd\n",b);

		printf("Do you want to continue the test (y/n)?\n");
		scanf(" %c",&usr_in);
	}while(usr_in=='y');

	return 0;
}

uint8_t func_test(int8_t input){
    int8_t i=1;

    for(i=5;i<input;i++){
    	printf("i is now:%d\n",i);
	return i;
    }
	printf("i inside of func_test() is now %hhd\n",i);
    return i;
}
