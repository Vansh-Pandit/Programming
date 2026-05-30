#include<stdio.h>

int FactRev(int iNo)
{
    int i = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo -1 ; i >= 1; i--)
    {
        if(iNo % i == 0)
        {
            printf("%d",i);
        }
    }

    
}

int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}