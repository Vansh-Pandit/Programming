#include<stdio.h>

double Convert(int iNo )
{
    return iNo * 0.0929;
}

int main()
{
    int iValue1 = 0;

    printf("Enter number ");
    scanf("%d",&iValue1);
    
    double dRet =0; 
    dRet = Convert(iValue1);

    printf("%lf ",dRet);
    

    return 0;
}