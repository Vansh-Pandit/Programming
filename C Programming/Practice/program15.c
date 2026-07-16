#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    int iRemainder = 0;
   
    iRemainder = iNo % 2;
    if(iRemainder == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number to chech whether it is even or odd : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even\n",iValue);
    }

    else
    {
        printf(" %d is Odd\n",iValue);
    }
    
    return 0;
}