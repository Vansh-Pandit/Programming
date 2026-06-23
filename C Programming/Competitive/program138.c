#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkDigit(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= 48 && ch <= 57))
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
        printf("Character is a Digit\n");
    }
    else
    {
        printf("Character is not a Digit\n");
    }

    return 0;
}