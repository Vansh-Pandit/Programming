#include<stdio.h>

int Summation(int Arr[] , int iSize)
{
    int iSum = 0;
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iRet = 0;
    int iLength = 4;
    int Brr[iLength];       
    int iCnt = 0 ;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter value : \n");
        scanf("%d",&Brr[iCnt]);
    }   

    iRet = Summation(Brr,iLength);
    printf("Summation is : %d\n",iRet);

    return 0;
}