#include<stdio.h>

typedef unsigned int UINT;


UINT ToggleBit(UINT iNo, UINT iPos1 , UINT iPos2 )
{
    UINT iMask = 0x1;
    UINT iResult = 0;
    UINT iMask1 = 1;
    UINT iMask2 = 1;

    if(iPos1 < 1 || iPos1 > 32 || iPos2 < 1 || iPos2 > 32)
    {
        return iNo;
    }

    
    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);
    
    iMask = iMask1 | iMask2 ;
    
    iResult = iNo ^ iMask;

    return iResult;
}
int main()
{
    UINT iValue = 0x0;
    UINT iLocation1 = 0;
    UINT iLocation2 = 0;
    UINT iRet = 0;

    printf("Emter value\n");
    scanf("%d",&iValue);

    printf("Emter the 1st bit position\n");
    scanf("%d",&iLocation1);

    printf("Emter the bit position\n");
    scanf("%d",&iLocation2);

    iRet = ToggleBit(iValue,iLocation1,iLocation2);
    printf("Updated number is : %u\n",iRet);

    return 0;
}