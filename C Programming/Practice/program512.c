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

    Display(7);          

    return 0;
}