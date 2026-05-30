#include<stdio.h>

int KmToMeter(int iNo )
{
    return iNo * 1000;
}

int main()
{
    int iValue1 = 0;

    printf("Enter number ");
    scanf("%d",&iValue1);
    
    int iRet =0; 
    iRet = KmToMeter(iValue1);

    printf("%d ",iRet);
    

    return 0;
}