#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[], int iSize)
{
    int iCount = 0;
    int iCnt =  0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( Arr[iCnt] == 11)
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

    iRet = CountFrequency(Brr,iLenght);

    printf("Frequency of 11 is : %d ",iRet);

    free(Brr);

    return 0;
}