
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];

   for (int k=0;k<4;++k) {
      for (int n=0;n<4;++n) {
         a[k][n]=1;
      }
      b[k]=1;
      for (int n=0;n<4;++n) {
         c[k]=b[k]*a[k][n];
      }
      printf(" %f ",c[k]);
   }
    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */
    return 0;
}
