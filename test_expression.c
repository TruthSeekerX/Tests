#include <stdio.h>

int main(int argc, char *argv[]){
    char input;

    do{

        /* I am trying to have the loop to keep asking me to press y if i keep press y. 
		However it works only at the first run. After the first run scanf("%c",&input); 
		statement gets ignored somehow. Therefore the loop breaks. */

        printf("Press 'y' to continue:\n");
        scanf(" %c",&input);
        printf("input is %c\n",input);
    }while(input=='y');

    return 0;
}