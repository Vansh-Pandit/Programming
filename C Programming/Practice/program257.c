#include<stdio.h>

int Update(char *str)
{
    int iCount = 0; 
    
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);                        

    iRet = CountSpace(Arr);

    printf("Freqeuncy is : %d\n",iRet);

    return 0;   
}