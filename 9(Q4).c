#include<stdio.h>

int Multi(int iNo )
{   
    int iResult = 1;
    int iDigit = 0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iResult = iResult * iDigit;
        iNo=iNo/10;
        
    }
    return iResult;
    
}

int main()
{
    int iValue1 = 0;

    printf("Enter number ");
    scanf("%d",&iValue1);
    
    int iRet =0; 
    iRet = Multi(iValue1);

    printf("%d ",iRet);
    

    return 0;
}