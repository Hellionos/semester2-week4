
/*
Name: Ethan West
Student ID: 201990893
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char input[100];
    // process the command-line data using appropriate string functions
    for( int k=1; k<2; ++k ) {
        printf("%s-",argv[k]);
    }
    for( int k=2; k<argc-1; ++k ) {
        printf("%s-",argv[k]);
    }
    for( int k=argc-1; k<argc; ++k ) {
        printf("%s",argv[k]);
    }
    //printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}