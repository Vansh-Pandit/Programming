#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize,int iNo)
{
    int iCnt =  0;
    bool bFlag = false;             
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iLenght = 0;
    int iCnt = 0;
    bool bRet = false;
    int *Brr = NULL;
    int iValue =0;
    
    printf("Enter number of elements : \n");
    scanf("%d",&iLenght);

    Brr = (int*)malloc(sizeof(int) * iLenght);

    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    printf("Enter element to br searched \n");
    scanf("%d",&iValue);

    bRet = LinearSearch(Brr,iLenght,iValue);

    if(bRet == true)
    {
        printf("Element is present \n");
    }

    else 
    {
        printf("Elememt is not present \n");
    }

    free(Brr);

    return 0;
}