/////////////////////////////////////////////////////////
//
//  Include required header files
//
/////////////////////////////////////////////////////////


#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Function name : AddTwoNumbers
//  Input :         float, float
//  Output :        float
//  Description :   Performs Addition of 2 floats
//  Date :          08/05/2026
//  Author :        Vansh Sameer Pandit
//
/////////////////////////////////////////////////////////

float AddTwoNumbers (    
                        float fNo1,             // First input 
                        float fNo2              // Second input
                    )
{
    float fAns = 0.0f;                          // Variable to store result 
    fAns = fNo1 + fNo2;                         // Perform Addition
    return fAns;                                // 
}
/////////////////////////////////////////////////////////
//
//  Application to Perform Addition of 2 floats values 
//
/////////////////////////////////////////////////////////

int main()
{   
    float fValue1 = 0.0f;                       // To store first input
    float fValue2 = 0.0f;                       // To store second input  
    float fResult = 0.0f;                       // To store the result

    printf("Enter First number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);
    
    fResult = AddTwoNumbers(fValue1, fValue2);  // Perform Calling

    printf("Addition is : %f\n",fResult);

    return 0;
}
/////////////////////////////////////////////////////////
//
//  Input :  10.0   11.0
//  Output : 20.0
//
///////////////////////////////////////////////////////////