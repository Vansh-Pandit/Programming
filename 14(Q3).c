#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == 11)
        {
            return TRUE;
        }
    }

    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize);

    if(bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(p);

    return 0;
}