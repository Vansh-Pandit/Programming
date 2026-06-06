#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] >= iStart) && (Arr[i] <= iEnd))
        {
            printf("%d\t",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int iStart = 0, iEnd = 0;
    int *p = NULL;

    scanf("%d",&iSize);
    scanf("%d",&iStart);
    scanf("%d",&iEnd);

    p = (int *)malloc(iSize*sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Range(p,iSize,iStart,iEnd);

    free(p);

    return 0;
}