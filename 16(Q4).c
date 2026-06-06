#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int i = 0, No = 0;

    for(i = 0; i < iLength; i++)
    {
        No = Arr[i];

        while(No != 0)
        {
            if(No % 10 == 3)
            {
                printf("%d\t",Arr[i]);
                break;
            }
            No = No / 10;
        }
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

    Display(p,iSize);

    free(p);

    return 0;
}