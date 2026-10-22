#include<stdio.h>

void Display(int iNo)
{

    if(iNo != 0)
    {
        printf("Jay Ganesh...\n");
        
        Display(iNo - 1);   
    }
}

int main()
{
    int iValue = 0;
    printf("Enter frequency\n");
    scanf("%d",&iValue);

    Display(iValue);  

    return 0;
}