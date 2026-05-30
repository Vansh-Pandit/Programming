#include<stdio.h>

int EvenFact(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iResult = iResult *iCnt;
        }
    }

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = EvenFact(iValue);

    printf("%d ",iRet);
    

    return 0;
}