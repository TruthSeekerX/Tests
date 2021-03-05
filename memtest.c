#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]){
	uint8_t a;
	uint8_t *p;

	p=&a;

	printf("the address p is pointing to is 0x%p",p);

	return 0;
}
