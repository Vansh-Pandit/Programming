#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            return i;
        }
    }

    return -1;
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

    iRet = FirstOcc(p,iSize,iNo);

    printf("%d\n",iRet);

    free(p);

    return 0;
}