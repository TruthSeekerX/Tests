//This program is meant for studing loops in c programming by implementing Logistic Map Equation Xn+1=r*Xn(1-Xn) where Xn[0,1], r[0,4]
//We will generate growth rate r from 0 to 4 with increament of 0.01. 
//We will then calculate the value of the equation by iteration 10000 times for each r

#include <stdio.h>
#include <stdint.h>

int main(int argv, char *argc[]){
  
  float X,r,usr_input;
  LOOP_INPUT_NUM:		//goto flag (I have read about try to avoid spaghetti goto statement, but I couldn't figer out another implementation yet)
  printf("Please input the initial rate of population X, where X is between 0.00 and 1.00, X=");
  scanf("%f",&usr_input);
  
    //error checking weather the input value is within the range [0,1]
    if(usr_input<0.00||usr_input>1.00){	
      printf("Sorry input value is out of range, please do it again.\n");
      goto LOOP_INPUT_NUM;
    }
    else{
    
      //Calculation of Logistic Map Equation
      for(r=0.00;r<=4.00;r+=0.01){	//generate r from 0 to 4 with increament of 0.01 
      X=usr_input;
        for (uint16_t i=0;i<=10000;i++){	//calculat the Equation with 10000 times of iteration 
          X=r*X*(1.00-X);
        }
      printf("%f\n",X);  
      }
    }
   

  return 0;
}
