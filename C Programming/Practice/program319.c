#include<stdio.h>

typedef unsigned int UNIT;
int main()
{   
    UNIT iMask = 0x1;
    int iCnt = 0;

    printf("%X\n",iMask);       // 1 
    iMask = iMask << 1;

    printf("%X\n",iMask);       // 2
    iMask = iMask << 1;

    printf("%X\n",iMask);       // 4
    iMask = iMask << 1;

    printf("%X\n",iMask);       // 8
    iMask = iMask << 1;

    printf("%X\n",iMask);       // 16
    iMask = iMask << 1;

    printf("%X\n",iMask);       // 32
    iMask = iMask << 1;

    printf("%X\n",iMask);       // 64
    iMask = iMask << 1;

    printf("%X\n",iMask);       // 128
    iMask = iMask << 1;

    printf("%X\n",iMask);       // 256
    iMask = iMask << 1;

    printf("%X\n",iMask);       // 512
    iMask = iMask << 1;

    printf("%X\n",iMask);       // 1024
    iMask = iMask << 1;

    printf("%X\n",iMask);       // 2048
    iMask = iMask << 1;

    printf("%X\n",iMask);       // 4096
    iMask = iMask << 1;

    return 0;
}