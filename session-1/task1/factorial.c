
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    long int f[20];
    for( int k=0; k<1; ++k) {
    f[k]=1;
    printf("%ld\n",f[k]);
    }
    for( int k=1; k<20; ++k ) {
    f[k] = f[k-1]*k;
    printf("%ld\n",f[k]);
     }

    return 0;
 }
/*17 values stored as int*/