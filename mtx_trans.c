#include<stdio.h>
#include<stdint.h>

int main(){
uint8_t size_c=4,size_r=3;
double training_set_inputs[4][3]={{1,2,3},
					    {4,5,6},
					    {7,8,9},
					    {10,11,12}};
double trs_trn_input[size_r][size_c];

	for(uint8_t r=0;r<4;r++){
		/**************************************************************
		Transpose training_set_inputs
		--> because inputs per color group dot product with error gives the adjustments
		--> add the adjustments to the synaptic weights
		**************************************************************/		
			for(uint8_t c=0;c<3;c++){
//				printf("%lf ", training_set_inputs[r][c]);
				trs_trn_input[c][r]=training_set_inputs[r][c];
				printf("%lf ", trs_trn_input[r][c]);		//when I print out t_trn_input only partly tranposed?
			}
			printf("\n");
		}
	return 0;
	}
