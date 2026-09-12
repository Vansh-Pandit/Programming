#include<stdio.h>

typedef unsigned int UNIT;
int main()
{   
    UNIT iMask = 0X80000000;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 33; iCnt++)       // Overflow
    {
        printf("%d:%X\n",iCnt,iMask);       
        iMask = iMask >> 1;
    }

    return 0;
}