import java.util.*;

class DigitX
{
    public void CountEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iCountEven = 0,iCountOdd =0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0 )
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
            
            iNo = iNo / 10;
        }
        System.out.println("Even Digits are : "+iCountEven);
        System.out.println("Odd Digits are : "+iCountOdd);
            
    }
}

class program88
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
        int iValue = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        dobj.CountEvenOddDigits(iValue);
    }
}