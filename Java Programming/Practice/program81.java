import java.util.*;

class DigitX
{
    public void DisplayDigits(int iNo)
    {
        int iDigit = 0;
        int iCnt =0;
        
        for(iCnt = iNo; iCnt > 0; iCnt = iCnt / 10)
        {
            iDigit = iCnt % 10;
            System.out.println(iDigit);
            
        }
    }
}

class program81
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
        int iValue = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        dobj.DisplayDigits(iValue);
    }
}