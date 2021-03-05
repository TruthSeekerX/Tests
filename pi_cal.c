/*******************************************************************************
*Pi calculator
*This is a self study project for first year C programming course. This pi calculator
*uses algorithm from Beeler et al. 1972, Item 120. 
*The main object of this project is to practice the use of arrays and pointers.
*References:
*https://mathworld.wolfram.com/PiFormulas.html
*https://crypto.stanford.edu/pbc/notes/pi/code.html
********************************************************************************/

#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]) {
    uint32_t r[1401];
    uint16_t pi[100];
	uint16_t i,j,k=0;
    uint32_t b, d, c = 0;

    for (i = 0; i <= 1400; i++) {
        r[i] = 2000;
    }

    for (j = 1400; j > 0; j -= 14, k++) {	//Each term in the approximation gives an additional bit of precision
        d = 0;

        i = j;
        for (;;) {
            d += r[i] * 10000;
            b = 2 * i - 1;

            r[i] = d % b;
            d /= b;
            i--;
            if (i == 0) break;
            d *= i;
        }
		pi[k]=(c+d/10000) ;
		printf("%d",pi[k]);
         c = d % 10000;
    }

    return 0;
}