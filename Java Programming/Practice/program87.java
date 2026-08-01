import java.util.*;

class DigitX
{
    public int CountOddDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) != 0 )
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }
}

class program87
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        iRet =dobj.CountOddDigits(iValue);
        System.out.println("Number of Odd digits are : "+ iRet);
    }
}