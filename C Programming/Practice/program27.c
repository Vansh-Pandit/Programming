#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("Jay Ganesh...\n");
        } 
}
int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d\n",&iValue);

    Display(iValue);

        
     
    return 0;
}