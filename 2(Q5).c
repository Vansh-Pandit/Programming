#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CHkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue =0;
    BOOL bRet =FALSE;
    printf("Enter number ");
    scanf("%d",&iValue);
    
    bRet = CHkEven(iValue);
    
    if(bRet == TRUE)
    {
        printf("Even");

    }
    else
    {
        printf("Odd");
    }
    
    return 0;
}