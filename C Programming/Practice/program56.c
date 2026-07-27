// Input : 5
// Ourput : 1   2   3   4   

#include<stdio.h>

void Display(int iNo)   
{
    int iCnt =0;
    for(iCnt = 1; iCnt < iNo;iCnt += 1)
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