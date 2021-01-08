/* El programa calcula y escribe los primeros 50 números de Fibonacci. */

#include <stdio.h>
#include <math.h>

int main() {
 int I,PRI=0,SEG=1,SIG;
 printf("\t %d \t %d",PRI,SEG);

 for(I = 3; I <= 50; I++){
    SIG = PRI + SEG;
    PRI = SEG;
    SEG = SIG;
  printf("\n %d",SIG);
 }
}