#include<stdio.h>
#include<ctype.h>

void Convert(char cValue)
{   
    if(isupper(cValue))
    {
        printf("%c\t",tolower(cValue) );
    }
    else if(islower(cValue))
    {
        printf("%c\t",toupper(cValue));       
    }
}

int main()
{
    char cValue ='0';
    
    printf("Enter number ");
    scanf("%c",&cValue);
    
    Convert(cValue);
    
    return 0;
}