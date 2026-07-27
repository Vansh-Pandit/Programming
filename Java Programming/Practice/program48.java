// type 3

import java.util.Scanner;

class NumberX
{
    public void SumFactors(int iNo)     // logic
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

        System.out.println("Summasion of factors :"+iSum);
    }
}
class program48
{

    public static void  main(String A [])
    {
        Scanner sobj = new Scanner (System.in);
        int iValue = 0 ;

        System.out.println("Enter the Number");
        iValue = sobj.nextInt();
        
        NumberX nobj = new NumberX();

        nobj.SumFactors(iValue);
        
    }
}

// Time Complexity : O(N/2)
// Where N >= 0