#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50 )
    {
        printf("low");
    }
    else if (iNo >= 50 && iNo <100)
    {
        printf("Medium");
    }
    else 
    {
        printf("high");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}