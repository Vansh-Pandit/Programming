// 5678
// 5 6 7 8

#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;
        Display(iNo);
        printf("%d\t",iDigit);
    }
    printf("\n");
}   

int main()
{
    int iValue = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);
        
    return 0;
}