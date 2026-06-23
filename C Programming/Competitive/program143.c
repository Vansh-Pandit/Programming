#include<stdio.h>


void Display(char ch)
{
    int iCnt = 0;
    char cDisplay = '\0';

    if(ch >= 97 && ch <= 122)
    {
        for(cDisplay = ch; cDisplay >= 'a'; cDisplay--)
        {
            printf("%c\t",cDisplay);
        }
    }

    if(ch >= 65 && ch <= 90)
    {
        for(cDisplay = ch; cDisplay <= 'Z'; cDisplay++)
        {
            printf("%c\t",cDisplay);
        }
    }
    printf("\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter he Alphabet\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}