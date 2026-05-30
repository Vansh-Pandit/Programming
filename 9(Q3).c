#include<stdio.h>

int Count(int iNo )
{   
    int iCnt=0;
    int iDigit = 0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo=iNo/10;
        if(iDigit>=3 && iDigit<=7)
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
    iRet = Count(iValue1);

    printf("%d ",iRet);
    

    return 0;
}