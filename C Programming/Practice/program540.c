// 5678
// 5*6*7*8

#include<stdio.h>

void Display(int Arr[],int iNo)
{
    static int i = 0;
    if(i<iNo)
    {
        printf("%d\n",Arr[i]);
        i++;
        Display(Arr,iNo);
    }
}   

int main()
{
    int Brr[]= {10,20,30,40,50};
    
    Display(Brr, 5);
        
    return 0;
}