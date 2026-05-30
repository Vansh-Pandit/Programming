#include<stdio.h>

int MultFact(int iNo)
{
   
    int i;
    int iResult = 0;
    for(i = iNo -1 ; i >= 1; i--)
        {
            if ((  iNo % i) != 0)
            {
                iResult = iResult + i;
            }
            
        }

    return iResult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}