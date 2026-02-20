
#include <stdio.h>

int main( void ) {
    char input[10];

    //int count = scanf("%s",input);
    int count = scanf("%9s",input); //This one gives a buffer that allows 
    // abcdefghijk to work by only accepting up to abcdefghi

    printf("Read %d value\n",count);
    printf("Values: %s\n",input);

    return 0;
}
/*@Hellionos ➜ /workspaces/semester2-week4/session-2/task3 (main) $ ./scanf_str
abc
Read 1 value
Values: abc
@Hellionos ➜ /workspaces/semester2-week4/session-2/task3 (main) $ ./scanf_str
abc def
Read 1 value
Values: abc
@Hellionos ➜ /workspaces/semester2-week4/session-2/task3 (main) $ ./scanf_str
abcdefghijk
Read 1 value
Values: abcdefghijk
*** stack smashing detected ***: terminated
Aborted (core dumped)*/