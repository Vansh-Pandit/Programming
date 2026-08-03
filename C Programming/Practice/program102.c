#include<stdio.h>

void CallByValue(int iNo)
{
    iNo++;
}

int main()
{
    int iValue = 11;

    CallByValue(iValue);

    printf("Value afer function call : %d\n",iValue);

    return 0;
}