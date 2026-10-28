// 5678
// 5 6 7 8

#include<stdio.h>

int Summation(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        Summation(iNo / 10);
        iSum = iSum + iDigit;
    }
    return iSum;
}   

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Summation is : %d\n",iRet);
        
    return 0;
}