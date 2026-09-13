#include<stdio.h>

typedef unsigned int UNIT;

int main()
{
    UNIT iMask = 0x8;
    UNIT iValue;

    printf("Emter value\n");
    scanf("%d",&iValue);

    iMask = iMask ^ iValue;

    printf("Updated number is : %u\n",iMask);

    return 0;
}