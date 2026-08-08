#include<stdio.h>
#include<stdlib.h>

int Summation(int arr[], int iSize)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + arr[iCnt];
    }

    return iSum;

}
int main()
{
    int iLenght = 0;
    int iCnt = 0;
    int iRet = 0;
    int *brr = NULL;
    
    printf("Enter number of elements : \n");
    scanf("%d",&iLenght);

    brr = (int*)malloc(sizeof(int) * iLenght);

    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d",&brr[iCnt]);
    }

    iRet = Summation(brr,iLenght);

    printf("Summation is : %d ",iRet);

    free(brr);

    return 0;
}