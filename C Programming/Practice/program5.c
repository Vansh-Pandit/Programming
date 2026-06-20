/*
    Algorithm

    Start
        Accept first number as No1
        Accept secont number as No2
        Perform addition of No1 and No2
        Display the result
    Stop

*/
#include<stdio.h>

int main()
{
    float i,j,k;

    printf("Enter First number : \n");
    scanf("%f",&i);

    printf("Enter Second number : \n");
    scanf("%f",&j);
    
    k= i + j;

    printf("Addition is : %f\n",k);

    return 0;
}