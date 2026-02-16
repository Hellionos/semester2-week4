
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];

    for (int k=0;k<4;++k) {
      for (int n=0;n<4;++n) {
         a[k][n]=1;
         b[k][n]=1;
         c[k][n]=a[k][n]+b[k][n];
         printf(" %f ",c[k][n]);
      }
      printf("\n");
    }

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
    return 0;
 }
