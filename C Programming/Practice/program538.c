// 5678
// 5*6*7*8

#include<stdio.h>

void Display(int Arr[],int iNo)
{
    int i = 0;
    while(i<iNo)
    {
        printf("%d\t",Arr[i]);
        i++;
    }
    printf("\n");
}   

int main()
{
    int Brr[]= {10,20,30,40,50};
    
    Display(Brr, 5);
        
    return 0;
}