#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkCapital(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= 65 && ch <= 90))
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
        printf("Character is a Capital alphabet\n");
    }
    else
    {
        printf("Character is not an Capital alphabet\n");
    }

    return 0;
}