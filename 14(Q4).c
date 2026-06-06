#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int i = 0, iCount = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == 11)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);

    printf("Frequency of 11 is : %d\n",iRet);

    free(p);

    return 0;
}
