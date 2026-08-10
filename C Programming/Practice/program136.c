#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt =  0;
    int iMin = 0;

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iLenght = 0;
    int iCnt = 0;
    int *Brr = NULL;
    int iRet = 0;
    
    printf("Enter number of elements : \n");
    scanf("%d",&iLenght);

    Brr = (int*)malloc(sizeof(int) * iLenght);

    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    
    iRet = Minimum(Brr,iLenght);

    printf("Minimum number is : %d",iRet);

    free(Brr);

    return 0;
}