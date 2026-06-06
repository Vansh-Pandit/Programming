#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;
    int iPos = -1;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iPos = i;
        }
    }

    return iPos;
}

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0, iRet = 0;
    int *p = NULL;

    scanf("%d",&iSize);
    scanf("%d",&iNo);

    p = (int *)malloc(iSize*sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = LastOcc(p,iSize,iNo);

    printf("%d\n",iRet);

    free(p);

    return 0;
}