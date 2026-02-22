
#include <stdio.h>

int main( void ) {

    // define suitable data
    int a,b;
    int matched = scanf(" %d %*c %d %*c", &a, &b);
  
    
    if (matched != 2) {
        fprintf(stderr, "Input did not match the expected form: e.g., 3 + 4 =\n");
        return 1;
    }

    
    // use scanf to read from the terminal
    // print the output from scanf and the data values 

    printf("Sum: %d\n", a + b);

    return 0;
}

