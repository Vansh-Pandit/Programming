#include<stdio.h>

void Display(char str[])
{
    printf("Input string is : %s\n",str);
}

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);                        

    Display(Arr);

    return 0;   
}