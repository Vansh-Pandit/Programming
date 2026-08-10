#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iCnt =  0;
    int iMax = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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
    
    iRet = Maximum(Brr,iLenght);

    printf("Maxximum number is : %d",iRet);

    free(Brr);

    return 0;
}