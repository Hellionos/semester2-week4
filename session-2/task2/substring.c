/*
 * Find a substring within a given string
 */

 // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"

#include <stdio.h>
#include <string.h>

int main (void) {

    char foxstring[] = "The quick brown fox jumped over the lazy dog";
    char ump[] = "ump";
    char *ptr = strstr(foxstring,ump);
    char *myptr = strtok(foxstring,ump);
    if (ptr!=NULL);
        printf("%p\n",&ptr);
        printf("%s\n",ptr);
        for (int k=0;k<3;k++) {
        
            printf("%c",ptr[k]);
        }
        printf("\n%s\n",myptr);

        
    return 0;
}

 /*  Hints:
 1. include the appropriate libraries
 2. create the main function
 3. define the program data as strings
 4. using the string library documentation find the appropriate string function
 5. implement the solution and compute the answer  
 6. print the answer appropriately as pointer, character and string
 */ 

/*char myStr[] = "Learn C++ at W3schools";
char * myPtr = strtok(myStr, " ");
while(myPtr != NULL) {
  cout << myPtr << "\n";
  myPtr = strtok(NULL, " ");
}*/