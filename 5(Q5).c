#include<stdio.h>

void OddNumber(int iNo)
{
    int iCnt =0;
    for(iCnt=1; iCnt <= 5; iCnt++)
    {
        printf("%d",iNo*iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    OddNumber(iValue);

    return 0;
}