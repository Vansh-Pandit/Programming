#include<stdio.h>

int strlenX(char str[])
{
    static int iCount = 0;
    if(*str != '\0')
    {
        iCount++;
        *str++;
        strlenX(str);
    }
    return iCount;
}

int main()
{
    char Arr[22]="\0";
    int iRet = 0;
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);
    printf("length of string is : %d\n",iRet);

    return 0;
}