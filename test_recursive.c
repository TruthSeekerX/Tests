#include <stdio.h>

/*
int summ(int num1, int num2, int n);

int main(void){
	int a,b,s;
	printf("Please input two numbers and the step for calculating the sum beween all integers between them.\nExample: 1,5,1 will sum up all the integers between [1,5] with step 1. The result would be 15. \n");
	scanf(" %d,%d,%d",&a,&b,&s);
	printf("The SUM between [%d,%d] with step %d is: %d\n",a,b,s,summ(a,b,s));	
	
	return 0;
}

int summ(int num1, int num2, int n){
	int result;
	if (num1==num2) result=num1;
	else if(num1==num2-n) result=num1+num2;
	else if(num1<num2-n) result=num1+summ(num1+n, num2,n);
	return result;
}

*/




int summ(int *array, int size);

int main(void){
	int nums[]={1,2,3,4,5,6,7,8,9,10};
	int *ptr;
	ptr=nums;
	
	int s=summ(ptr,10);
	printf("the sum is %d\n",s);
	
	return 0;
}

int summ(int *array, int size){
	int c=0,result;
	if (size==1) result=*array;
	else if(size==2) result=*array + *(array+1);
	else if(size>=3) result=array[0] + summ(array+1,size-1);
/*	
	int i,result;
	result=0;
	for(i=0;i<size;i++){
		result += *array;
		array++;
		printf("the result is %d\n",result);
	}
*/	
	return result;
}


/*
int ack(int m,int n){
int result;
if (m==0) result=n+1;
else if (n==0) result= ack(m-1,1);
else result = ack(m-1, ack(m,n-1));

return result;
}

int main(void){
	int a,b;
	printf("Please input two numbers for calculating ackerman's number. example 1,2 \n");
	scanf(" %d,%d",&a,&b);
	printf("ackerman number (%d,%d) is: %d\n",a,b,ack(a,b));
}
*/
