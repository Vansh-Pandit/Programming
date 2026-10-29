// 5678
// 5*6*7*8

#include<stdio.h>

void Display(int Arr[],int iNo)
{
    static int i = 0;
    if(i<iNo)
    {
        i++;            // Invalid data
        Display(Arr,iNo);
        printf("%d\n",Arr[i]);
    }
}   

int main()
{
    int Brr[]= {10,20,30,40,50};
    
    Display(Brr, 5);
        
    return 0;
}