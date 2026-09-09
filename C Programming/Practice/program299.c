#include<stdio.h>

void strrevX(char *str)
{
    char *Start = NULL, *End=NULL;
    char temp ='\0';

    Start =str;
    while(*str != '\0')
    {
        str++;
    }
    str--;  
    End = str;

    while(Start <= End)
    {
        temp  =*Start;
        *Start = *End;
        *End = temp;
        Start++;
        End--;
    }
    
    
}
int main()
{
    char Arr[50] = {'\0'};

    printf("ENter string \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("Updated string is : %s\n",Arr);

    return 0;
}