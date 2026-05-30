#include<stdio.h>

int Diff(int iNo )
{   
    int iCnt=0;
    int iResult =0;
    int iDigit = 0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo=iNo/10;
        if((iDigit % 2)!=0)
        {
            iCnt++;
        }
        if((iDigit % 2)==0)
        {
            iResult++;
        }
    }
    return iResult - iCnt;
    
}

int main()
{
    int iValue1 = 0;

    printf("Enter number ");
    scanf("%d",&iValue1);
    
    int iRet =0; 
    iRet = Diff(iValue1);

    printf("%d ",iRet);
    

    return 0;
}