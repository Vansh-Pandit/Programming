#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j =0;  


    for(i = 1; i <= iRow; i++)
    {

        for(j = 1; j <= iCol; j++)
        {
            if(i >= j)
            {
                printf("%d\t",j);
            }
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