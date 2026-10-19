#include<stdio.h>

void Display()
{
    static int i = 0;

    i = 1;  // Issue
    if(i<=4)
    {
        printf("Jay Ganesh...\n");
        i++;
        
        Display();
    }
}

int main()
{
    Display();          

    return 0;
}