#include<stdio.h>
// input 4
// output 10 (1+2+3+4)
int summation(int iNo)
{
    int iSum = 0;

    while(iNo != 0 )
    {
        iSum = iSum + iNo;
        iNo--;
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