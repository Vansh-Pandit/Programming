// input : 7
// output : A   2   C   4   E   6    G
import java.util.*;

class program186
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';
        
        for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)
        {        
            if((iCnt % 2 )== 0)
            {
                System.out.print(iCnt+"\t");
            }
            else
            {
                System.out.print(ch+"\t");
                
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