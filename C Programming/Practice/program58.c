// Input : 8
// Ourput : 1   3   5   7

#include<stdio.h>

void Display(int iNo)   
{
    int iCnt =0;
    for(iCnt = 1; iCnt <= iNo;iCnt = iCnt + 2)
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