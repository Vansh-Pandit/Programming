#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int iCount = 0;
    int iCnt =  0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iCount++;
        }
    }

    return iCount;
}
int main()
{
    int iLenght = 0;
    int iCnt = 0;
    int iRet = 0;
    int *Brr = NULL;
    
    printf("Enter number of elements : \n");
    scanf("%d",&iLenght);

    Brr = (int*)malloc(sizeof(int) * iLenght);

    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = CountOdd(Brr,iLenght);

    printf("Odd Numbers are : %d ",iRet);

    free(Brr);

    return 0;
}