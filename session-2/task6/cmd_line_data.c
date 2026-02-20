
/*
 * We expect to use the following program by providing a list of command line data
 * - 1 integer value
 * - 1 string 
 * - 1 double value
 * Process the command line arguments and print them with appropriate formatting.
 * Test your code, eg.  ./cmd_line_data -2 abcd 4.2
 *
 * Implement a similar code in Python and compare it to the C code.
 */

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char **argv ) {
    if (argc == 3);
        int integer = atoi(argv[1]);
        float floaty = atof(argv[3]);

        printf("%d\n",integer);
        printf("%s\n",argv[2]);
        printf("%f\n",floaty);

    return 0;
}
