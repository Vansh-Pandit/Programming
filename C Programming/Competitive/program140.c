#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplayTime(char ch)
{
    switch (ch)
    {
        case 'A':
            printf("Exam is at 7 am\n");
            break;

        case 'B':
            printf("Exam is at 8:30 am\n");
            break;
        
        case 'C':
            printf("Exam is at 9:20 am\n");
            break;

        case 'D':
            printf("Exam is at 10:30 am\n");
            break;

        default:

            printf("Invalid input");


    }
}

int main()
{
    char cValue = '\0';

    printf("Enter he Division\n");
    scanf("%c",&cValue);

    DisplayTime(cValue);

    return 0;
}