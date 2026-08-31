#include<stdio.h>

int CountVowels(const char *str)
{
    int iCount = 0; 
    
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'o' || *str == 'u'|| *str == 'i' )
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

    iRet = CountVowels(Arr);

    printf("Freqeuncy is : %d\n",iRet);

    return 0;   
}