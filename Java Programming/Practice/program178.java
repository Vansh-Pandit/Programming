// input : 7
// output : 1   *   2   *   3   *   4     
import java.util.*;

class program178
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {        
            
            if(iCnt % 2 == 0)
            {
                System.out.print("*"+ ("\t"));
            }
            else
            {
                
                System.out.print(((iCnt/2) + 1)+ "\t");
                
            }            
        }
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the number of elements");

        iValue = sobj.nextInt();
        Display(iValue);

    }
}