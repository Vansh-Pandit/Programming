// Input : 5
// Ourput : 5   4   3   2   1   0

#include<stdio.h>

void Display(int iNo)   
{
    int iCnt =0;
    for(iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}