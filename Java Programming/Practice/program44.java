// type 3

import java.util.Scanner;

class NumberX
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
}
class program44
{

    public static void  main(String A [])
    {
        int iValue = 0 ;
        boolean bRet = false;
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter the Number");
        iValue = sobj.nextInt();

        bRet = NumberX.ChechDivisible(iValue);  

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