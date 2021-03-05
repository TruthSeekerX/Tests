/******************************************************************************************************************************************
  *  This program is meant for studing loops in c programming by implementing Logistic Map Equation Xn+1=r*Xn(1-Xn) where Xn[0,1], r[0,4].
  *  We will generate growth rate r from 0 to 4 with increament of 0.01. 
  *  We will then calculate the value of the equation by iteration 10000 times for each r.
  *  Author: Siyuan Xu e2002077
  *  Version: v0.2
  *  Fixes:
  *  1. Now the program calculate the value of the equation with iteration 10,000 times instead of 100,000 times as in previous version.
  *  2. Error checking mechanism is updated. "goto" statement is replaced by "do...while..." statement.
  *****************************************************************************************************************************************/
#include <stdio.h>
#include <stdint.h>

int main(int argv, char *argc[]){
  
  float usr_input;
  
  do{
  
    printf("Please input the initial rate of population X, where X is between 0.00 and 1.00, X=");
    scanf("%f",&usr_input);				//Read the user input
    
    if(usr_input<0.00||usr_input>1.00){		//error checking if input value is within the range[0,1]
    
    printf("Sorry the input value is out of range, please try again!\n");
    } else {
	
	/*Calculation of Logistic Map Equation*/
	float X,r;
	
	for(r=0.00;r<=4.00;r+=0.01){			//generate r from 0 to 4 with increament of 0.01 	  

	  X=usr_input;
            
	  for (uint16_t i=0;i<=10000;i++){		//calculat the Equation with 10000 times of iteration 
          X=r*X*(1.00-X);
          } 	
      	  
      	  printf("%f\n",X);				//output the result 
  	}
  	
  	break;						//break out of the infinite loop when input value is within the range[0,1]
    }							
  } while(1);
  				  
  return 0;			
}
