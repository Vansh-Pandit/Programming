#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos )
{
    UINT iMask = 0x1;
    UINT iResult = 0; 

    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid input");
        return iNo;
    }
    
    iMask = iMask << (iPos -1 );
    iResult = iNo | iMask;

    return iResult;
    
}
int main()
{
    UINT iValue = 0x0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("Emter value\n");
    scanf("%d",&iValue);

    printf("Emter the position to toggle\n");
    scanf("%d",&iLocation);

    iRet = ToggleBit(iValue,iLocation);
    printf("Updated number is : %u\n",iRet);

    return 0;
}