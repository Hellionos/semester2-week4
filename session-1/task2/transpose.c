
/*
 * Transpose of a matrix
 */

 #include <stdio.h>

 int main( void ) {
    int a[4][4];
    int i;
    int j;

    for (int k=0;k<4;++k) {
      for (int n=0;n<4;++n) {
         a[k][n]=2*k-n;
         printf(" %d ",a[k][n]);
      }
      printf("\n");
   }
   printf("\n");
    for (int k=0;k<4;++k) {
  
      for (int n=0;n<4;++n) {
         i=a[k][n];
         j=a[n][k];
         a[n][k]=i;
         a[k][n]=j;
      }}
      for (int k=0;k<4;++k) {
  
         for (int n=0;n<4;++n) {
         printf(" %d ",a[n][k]);
      }
      printf("\n");
    }
    /*
    Intialise the matrix a to 2i-j.
    Print out matrix a. 
    Write code for the transpose - you can use other variables as necessary but not a copy of the matrix 
    Print the transpose.
    */
    return 0;
 }
