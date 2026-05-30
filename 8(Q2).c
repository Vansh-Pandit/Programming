#include<stdio.h>

double Area(float fWidth , float fHeight )
{
    return fHeight * fWidth;
}

int main()
{
    float fValue1 = 0;
    float fValue2 = 0;
    double dRet = 0;

    printf("Enter number ");
    scanf("%f",&fValue1);

    printf("Enter number ");
    scanf("%f",&fValue2);    

    dRet = Area(fValue1,fValue2);

    printf("%lf ",dRet);
    

    return 0;
}