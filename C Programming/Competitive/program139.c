#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkSmall(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= 'a' && ch <= 'z'))
    {
        bFlag = TRUE;
    }
    return bFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter he character\n");
    scanf("%c",&cValue);

    bRet = chkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("Character is a Small alphabet\n");
    }
    else
    {
        printf("Character is not a Small alphabet\n");
    }

    return 0;
}