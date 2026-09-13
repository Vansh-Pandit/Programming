#include<stdio.h>

typedef unsigned int UNIT;
int main()
{
    // Largest value of int   
    UNIT iMask = 0XFFFFFFFF;
    
    printf("%u\t%X\n",iMask,iMask);

    return 0;
}