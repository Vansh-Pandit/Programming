#include<stdio.h>

void ReverseDisplay(char *str)
{
    char *Start = NULL;

    Start =str;
    while(*str != '\0')
    {
        str++;
    }
    str--;  
    while (Start <= str)
    {
        printf("%c",*str);
        str--;
    }
    printf("\n");
    
}
int main()
{
    char Arr[50] = {'\0'};

    printf("ENter string \n");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);

    return 0;
}