#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]){
	printf("You typed %d arguments\n",argc);
	for(uint16_t i=0;i<=argc-1;i++){
		printf("Argument%d is:%s\n",i,argv[i]);
	}

return 0;
}
