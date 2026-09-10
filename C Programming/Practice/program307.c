#include<stdio.h>

int main()
{
    int iNo = 0,iCount = 0,iDigit = 0;
    printf("ENter number \n");
    scanf("%d",&iNo);

    while (iNo != 0)
    {
        iDigit = iNo % 2;
        iCount = iCount + iDigit;

        iNo = iNo / 2;
    }
    printf("\n");
    printf("Number of 1 in bits is : %d\n",iCount);

    return 0;
}