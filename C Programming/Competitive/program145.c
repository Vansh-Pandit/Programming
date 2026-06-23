#include<stdio.h>

void Display(char ch)
{
    int iDigit = 0;
    int iPrint =0;
    int iMulti = 1;
    while(ch != 0)
    {
        iDigit = ch % 8;
        ch = ch / 8;
        iPrint = iPrint + iDigit * iMulti;
        iMulti = iMulti * 10;
    }
    printf("%d",iPrint);

    printf("\n");
}
void display(char ch)
{
    int iDigit = 0;
    int iMulti = 1 ;
    int iPrint = 0;
    int Rem = 0;
    int i = 0 ;
    int CH ='\0';
    printf("0X");
    while(ch != 0)
    {
        iDigit = ch % 16 ;
        if(iDigit > 9)
        {
            Rem = iDigit % 9;
            for(i = 0, CH = 'A'; i<Rem;i++,CH++)
            {
                
            }
            printf("%c",CH);

        }
        else
        {
            printf("%d",iDigit);
        }
        ch = ch / 16;
    }
    printf("\n");
}
int main() 
{
    char cValue = '\0';

    printf("Enter Value\n");
    scanf("%c",&cValue);

    display(cValue);

    return 0;
}