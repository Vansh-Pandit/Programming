#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j =0;
    int iCount1 = 1;
    int iCount2 = 2;    

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i%2)==0)
            {
                printf("%d\t",iCount1);
                iCount1 = iCount1 + 2;
            }
            else
            {
                printf("%d\t",iCount2);
                iCount2 = iCount2 + 2;
            }
            
            if(iCount1>9)
            {
                iCount1 = 1;
            }
            if(iCount2>10)
            {
                iCount1 = 2;
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