#include<stdio.h>

int Countsmall(const char *str)
{
    int iCount = 0; 
    
    while(*str != '\0')
    {
        if(*str >= 97 && *str <= 122)
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

    iRet = Countsmall(Arr);

    printf("Freqeuncy is : %d\n",iRet);

    return 0;   
}