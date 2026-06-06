#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int i = 0;
    int iProd = 1;
    int Flag = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iProd = iProd * Arr[i];
            Flag = 1;
        }
    }

    if(Flag == 0)
    {
        return 0;
    }

    return iProd;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p,iSize);

    printf("%d\n",iRet);

    free(p);

    return 0;
}