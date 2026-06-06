#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i = 0, EvenSum = 0, OddSum = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
            EvenSum += Arr[i];
        else
            OddSum += Arr[i];
    }

    return EvenSum - OddSum;
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

    iRet = Difference(p,iSize);

    printf("Difference is : %d\n",iRet);

    free(p);

    return 0;
}