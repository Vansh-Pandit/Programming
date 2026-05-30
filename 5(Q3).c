#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;
    for(iCnt=-iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}