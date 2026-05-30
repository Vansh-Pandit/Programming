#include<stdio.h>

void Display(int iNo)
{
    printf("%d",iNo * 70);
}

int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}