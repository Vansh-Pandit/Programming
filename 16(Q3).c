#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i = 0;
    int Max = Arr[0];
    int Min = Arr[0];

    for(i = 1; i < iLength; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }

        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }

    return Max - Min;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("%d\n",iRet);

    free(p);

    return 0;
}