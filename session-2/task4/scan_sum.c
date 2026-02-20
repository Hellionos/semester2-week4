
#include <stdio.h>

int main( void ) {

    // define suitable data
    char input[4];
    int a = input[1];
    int b = input[2];
    int sum = a+b;
    int count = scanf("%4s",input);
    // use scanf to read from the terminal
    // print the output from scanf and the data values 
    printf("Read %d value\n",count);
    printf("%d\n",sum);

    return 0;
}

