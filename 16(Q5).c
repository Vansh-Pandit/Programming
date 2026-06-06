#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int i = 0, No = 0, Sum = 0;

    for(i = 0; i < iLength; i++)
    {
        No = Arr[i];
        Sum = 0;

        while(No != 0)
        {
            Sum = Sum + (No % 10);
            No = No / 10;
        }

        printf("%d\t",Sum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p,iSize);

    free(p);

    return 0;
}