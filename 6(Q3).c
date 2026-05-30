#include<stdio.h>

int Factorial(int iNo)
{
    int iResult = 1;
    int iCnt=0;
    for (iCnt=iNo; iCnt >= 1 ; iCnt--)
    {
        iResult =iResult * iCnt;
        
    }
    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = Factorial    (iValue);

    printf("%d",iRet);

    return 0;
}