#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int i;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 3 == 0) && (Arr[i] % 5 == 0))
        {
            printf("%d\t",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}