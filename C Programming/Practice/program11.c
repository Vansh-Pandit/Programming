/*
    Start
        Accept number as no
        if no is compleletly divisible by 2 
            then print even
        Otherwise
            print odd 
    Stop


    Start
        Accept number as no
        Divide no by 2
        if remainder is 0 
            theb print as Even
        otherwise 
            print as odd
    Stop
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even\n");
    }

    else
    {
        printf("Number is odd\n");
    }


    return 0;
}