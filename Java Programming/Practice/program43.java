// type 2

import java.util.Scanner;

class program39
{
    public static boolean ChechDivisible(int iNo)
    {
        if((iNo % 3 == 0 ) && (iNo % 5 ==0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void  main(String A [])
    {
        int iValue = 0 ;
        boolean bRet = false;
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter the Number");
        iValue = sobj.nextInt();

        bRet = ChechDivisible(iValue);  

        if(bRet == true)
        {
            System.out.println("Number is divisible by 3 and 5");
        }  
        else
        {
            System.out.println("Number is not divisible by 3 and 5 ");
        }

        
    }
}