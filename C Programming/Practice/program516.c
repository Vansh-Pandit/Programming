#include<stdio.h>

void Display(int iNo)
{

    if(iNo)
    {
        printf("Jay Ganesh...\n");
        iNo--;
        
        Display(iNo);
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