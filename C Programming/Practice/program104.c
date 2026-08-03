#include<stdio.h>

void Display(int * iPtr)
{
    printf("Value od iPtr : %d\n",iPtr);
}

int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("Base address of Arr : %d\n",Arr);

    Display(Arr);

    return 0;
}