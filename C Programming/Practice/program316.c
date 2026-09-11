#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x40;
    UINT iAns = 0;
    
    printf("ENter number \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("7th bit is ON\n");
    }
    else
    {
        printf("7th bit is OFF\n");
    }

    

    return 0;
}