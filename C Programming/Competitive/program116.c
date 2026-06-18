#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j =0;
    int iCount = 1;
    

    for(i = iRow; i >= 1; i--)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t",iCount);
            iCount++;
            if(iCount>9)
            {
                iCount = 1;
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