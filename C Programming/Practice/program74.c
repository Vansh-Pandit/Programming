// Input : 5
// Output : 5   4   3   2   1

#include<stdio.h>

int main()
{
    int iCnt = 0;
    iCnt = 5;
    while(iCnt>0)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }

    return 0;
}