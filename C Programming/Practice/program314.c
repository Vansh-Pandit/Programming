#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x10000;
    UINT iAns = 0;
    
    printf("ENter number \n");
    scanf("%d",&iNo);


    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("17th bit is ON\n");
    }
    else
    {
        printf("17th bit is OFF\n");
    }

    

    return 0;
}