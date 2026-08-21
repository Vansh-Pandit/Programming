// input : 7
// output : A   2   C   4   E   6    G
import java.util.*;

class program188
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        int iCount = 0;
        
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {        
            if((iCount % 2 )== 0)
            {
                System.out.print("*");
            }
            else
            {
                System.out.print("#");
                
            }
            if((iCnt % 3)==0)
            {
                iCount++;
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