import java.util.*;

class program171
{
    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            System.out.print("*\t");
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