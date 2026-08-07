#include<stdio.h>

void Display(int Arr[] , int iSize)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int iLength = 4;
    int Brr[iLength];      
    int iCnt = 0 ;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter value : \n");
        scanf("%d",&Brr[iCnt]);
    }   

    Display(Brr,iLength);

    return 0;
}