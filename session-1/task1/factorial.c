
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    long int f[20];
    for( int k=0; k<1; ++k) {
    f[k]=1;
    printf("%f\n",(double)f[k]);
    }
    for( int k=1; k<20; ++k ) {
    f[k] = f[k-1]*k;
    printf("%f\n",(double)f[k]);
     }

    return 0;
 }
/*17 values stored as int*/