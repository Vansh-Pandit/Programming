#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x1;
    UINT iAns = 0;
    UINT iPos = 0;
    
    printf("ENter number \n");
    scanf("%d",&iNo);

    printf("ENter the position to be checked \n");
    scanf("%d",&iPos);

    iMask = iMask << (iPos - 1);
    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    

    return 0;
}