#include <stdio.h>

/* Writea program wich takes 3 number from the user,
computes and print the avare of those numbers*/

int avarage(int a, int b, int c);
int main(void)
{

    int result, a, b, c;

    printf("Enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    result = avarage(a,b,c);
    printf("avarege is %d", result);

    return 0;
}

int avarage(int a, int b, int c)
{
    a + b + c / 3;
}
