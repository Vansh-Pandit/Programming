#include<stdio.h>

void Display()
{
    auto int i = 0;

    if(i<4)
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