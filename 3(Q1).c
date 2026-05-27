#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    else
    {
        int iCnt = 0;
        for(iCnt =1;iCnt<=iNo;iCnt++)
        {
            printf("%d\t",2*iCnt);
        }
    }
}

int main()
{
    int iValue =0;
    
    printf("Enter number ");
    scanf("%d",&iValue);
    
    PrintEven(iValue);
    
    return 0;
}