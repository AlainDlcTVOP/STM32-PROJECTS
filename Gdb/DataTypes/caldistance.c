#include <stdio.h>
#include <stdint.h>
/* calculate and print distance from A to C */

#define DISTB 160
#define DISTC 40

uint8_t calc(void);
int main()
{

    calc();
    return 0;
}
uint8_t calc(void)
{
    unsigned char distanceA2B = DISTB;
    unsigned char distanceB2C = DISTC;

    unsigned char distanceA2C;

    distanceA2C = distanceA2B + distanceB2C;
    printf("Total distance from A2C = %d\n", distanceA2C);
    printf("Print Hex Total distance from A2C = %X\n", distanceA2C);
    printf("Print Char Total distance from A2C = %c\n", distanceA2C);
    printf("size of unsigned char %d", sizeof(distanceA2C));
}
