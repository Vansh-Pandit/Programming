#include<stdio.h>

double Area(float fRadius )
{
    return fRadius * fRadius * 3.14;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter number ");
    scanf("%f",&fValue);

    dRet = Area(fValue);

    printf("%lf ",dRet);
    

    return 0;
}