#include<stdio.h>

float AddTwoNumbers(float fNo1 , float fNo2)
{
    float fAns = 0.0f;
    fAns = fNo1 + fNo2;
    return fAns;
}

int main()
{   
    float fValue1 = 0.0f;                       // To store first input
    float fValue2 = 0.0f;                       // To store second input  
    float fResult = 0.0f;                       // To store the result

    printf("Enter First number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);
    
    fResult = AddTwoNumbers(fValue1, fValue2);                // Perform the addition

    printf("Addition is : %f\n",fResult);

    return 0;
}