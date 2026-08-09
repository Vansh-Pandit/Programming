#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize)
{
    int iCnt =  0;
    bool bFlag = false;             
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( Arr[iCnt] == 11)
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
    
    printf("Enter number of elements : \n");
    scanf("%d",&iLenght);

    Brr = (int*)malloc(sizeof(int) * iLenght);

    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    bRet = LinearSearch(Brr,iLenght);

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