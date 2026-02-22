
/*
Name: Ethan West
Student ID: 201990893
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[50] = "";
    char hyphen[] = "-";
    // process the command-line data using appropriate string functions
    for( int k=1; k<argc; ++k ) {
        if (k == 1) {
            strcat(buffer,argv[k]);
            strcat(buffer,hyphen);
        }
        if (k>1 && k<argc-1) {
            strcat(buffer,argv[k]);
            strcat(buffer,hyphen);
        }
        if (k == argc-1) {
            strcat(buffer,argv[k]);
        }
    }
    if (argc == 2) {
        strcpy(buffer,argv[1]);
    }
    printf("%s\n",buffer); // use only this single print statement in your submitted code
    return 0;
}