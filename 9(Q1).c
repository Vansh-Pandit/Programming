#include<stdio.h>

int Even(int iNo )
{   
    int iCnt=0;
    int iDigit = 0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo=iNo/10;
        if((iDigit % 2)==0)
        {
            iCnt++;
        }
    }
    return iCnt;
    
}

int main()
{
    int iValue1 = 0;

    printf("Enter number ");
    scanf("%d",&iValue1);
    
    int iRet =0; 
    iRet = Even(iValue1);

    printf("%d ",iRet);
    

    return 0;
}