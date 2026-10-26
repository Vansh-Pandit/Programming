

// 4
// 4*3*2*1 = 24

// 5678
// 5 6 7 8

#include<stdio.h>


void Display(int iNo)
{
    static int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t",iDigit);
        iNo = iNo /10;
        Display(iNo);
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