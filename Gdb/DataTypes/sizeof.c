#include <stdio.h>

/* Print size of */

int main(int argc, char const *argv[])
{

long long myLongHistory = 900;

char size = sizeof(myLongHistory);
    printf("Size of char data type = %d\n", sizeof(char));
    printf("Size of short data type = %d\n", sizeof(short));
    printf("Size of long data type = %d\n", sizeof(long));
    printf("Size of long long data type = %d\n", size);
    printf("Size of int data type = %d\n", sizeof(int));

    return 0;
}
