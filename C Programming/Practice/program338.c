#include<stdio.h>

typedef unsigned int UNIT;

int main()
{
    UNIT iMask = 0xFFFFEFFF;
    UNIT iNo = 0x0;

    printf("Emter value\n");
    scanf("%d",&iNo);

    iNo = iMask & iNo;

    printf("Updated number is : %u\n",iNo);

    return 0;
}