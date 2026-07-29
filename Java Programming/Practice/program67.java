import java.util.Scanner;

class NumberX
{
    public boolean CheckPrime(int iNo)     // logic
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++ )
        {

            if((iNo % iCnt) == 0)
            {
                return false;               // bad programming
            }

        }

        return true;
        

               
    }
}
class program67
{

    public static void  main(String A [])
    {
        Scanner sobj = new Scanner (System.in);
        int iValue = 0 ;
        boolean bRet = false;

        System.out.println("Enter the Number");
        iValue = sobj.nextInt();
        
        NumberX nobj = new NumberX();

        bRet = nobj.CheckPrime(iValue);
        if(bRet == true)
        {
            System.out.println("Number is Prime");
        }
        else 
        {
            System.out.println("Number is not Prime");
        }
        
    }
}

// Time Complexity : <O(N/2)
// Where N >= 0