#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j =0;
    char ch ='\0';    

    for(i = 1,ch='A'; i <= iRow; i++, ch++)
    {
        for(j = iCol ;j >= 1; j-- )
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
    printf("\n");
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of Rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}