// type 3

import java.util.Scanner;

class NumberX
{
    public int SumFactors(int iNo)     // logic
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++ )
        {

            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;

            }
        }

        return iSum;        
    }
}
class program49
{

    public static void  main(String A [])
    {
        Scanner sobj = new Scanner (System.in);
        int iValue = 0 ;
        int iRet = 0;

        System.out.println("Enter the Number");
        iValue = sobj.nextInt();
        
        NumberX nobj = new NumberX();

        iRet = nobj.SumFactors(iValue);
        System.out.println("Summasion of factors is :"+ iRet);
        
    }
}

// Time Complexity : O(N/2)
// Where N >= 0