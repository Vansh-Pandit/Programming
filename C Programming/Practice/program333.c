#include<stdio.h>

typedef unsigned int UNIT;

int main()
{
    UNIT iMask = 0x1;
    UNIT iValue = 0x0;
    UNIT iPOs = 0;

    printf("Emter value\n");
    scanf("%d",&iValue);

    printf("Emter the position to toggle\n");
    scanf("%d",&iPOs);
    
    iMask = iMask << (iPOs -1 );

    iMask = iMask ^ iValue;

    printf("Updated number is : %u\n",iMask);

    return 0;
}