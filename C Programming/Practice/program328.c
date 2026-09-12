#include<stdio.h>

typedef unsigned int UNIT;
int main()
{
    // Smallest value of int   
    UNIT iMask = 0X00000000;
    
    printf("%d\t%X\n",iMask,iMask);

    return 0;
}