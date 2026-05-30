#include<stdio.h>

double Convert(int iNo )
{
    return ((iNo -32) *(5.0/9.0));
}

int main()
{
    float fValue1 = 0;

    printf("Enter number ");
    scanf("%f",&fValue1);
    
    double dRet =0; 
    dRet = Convert(fValue1);

    printf("%lf ",dRet);
    

    return 0;
}