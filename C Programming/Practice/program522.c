#include<stdio.h>

int summation(int iNo)
{
    int iSum = 0;
    int i = 0;

    i = 1;
    while(i <= iNo )
    {
        iSum = iSum + i;
        i++;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter frequency\n");
    scanf("%d",&iValue);

    iRet = summation(iValue);
    
    printf("Summation is : %d\n",iRet);

    return 0;
}