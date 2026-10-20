#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;
    while(i<=iNo)
    {
        printf("Jay Ganesh...\n");
        i++;
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