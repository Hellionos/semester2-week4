
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;

    a = calloc(n,sizeof(float *));
    for(int k = 0;k<4;++k) {
        a[k]=calloc(n,sizeof(float));
    }
    b = calloc(n,sizeof(float));
    c = calloc(n,sizeof(float));

   for (int k=0;k<4;++k) {
      for (int i=0;i<4;++i) {
         a[k][i]=1;
      }
      b[k]=1;
      for (int i=0;i<4;++i) {
         c[k]+=b[k]*a[k][i];
      }
      printf("%f ",c[k]);
   }
    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */
    for (int i = 0; i < n; ++i){
      free(a[i]);
    }
    free(a);
    free(b);
    free(c);
    return 0;
 }
