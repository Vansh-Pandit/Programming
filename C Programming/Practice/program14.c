#include<stdio.h>

int CheckEvenOdd(int iNo)
{
    int iRemainder = 0;
   
    iRemainder = iNo % 2;

    return iRemainder;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number to chech whether it is even or odd : ");
    scanf("%d",&iValue);

    iRet = CheckEvenOdd(iValue);

    if(iRet == 0)
    {
        printf("%d is Even\n",iValue);
    }

    else
    {
        printf(" %d is Odd\n",iValue);
    }
    
    return 0;
}