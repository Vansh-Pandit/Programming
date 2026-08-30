#include<stdio.h>

void strlenX(char *str)
{
    *str = 'A';
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);                        

    strlenX(Arr);

    printf("%s\n",Arr);

    return 0;   
}