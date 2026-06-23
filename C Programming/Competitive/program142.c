#include<stdio.h>


void Display(char ch)
{
 
    char cDisplay = '\0';

    if(ch >= 97 && ch <= 122)
    {
        cDisplay = ch - 32;
        printf("%c\n",cDisplay);
    }

    if(ch >= 65 && ch <= 97)
    {
        cDisplay = ch + 32;
        printf("%c\n",cDisplay);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter he Alphabet\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}