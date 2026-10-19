#include<stdio.h>

void Display()
{
    static int i = 1;

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