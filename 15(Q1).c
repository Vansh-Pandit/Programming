#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;
        }
    }

    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter number to search : ");
    scanf("%d",&iNo);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iNo);

    if(bRet == TRUE)
        printf("Number is present\n");
    else

    
        printf("Number is absent\n");

    free(p);

    return 0;
}