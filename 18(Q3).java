class Logic
{
    void sumEvenOddDigits(int num)
    {
        int digit;
        int evenSum = 0;
        int oddSum = 0;

        while(num != 0)
        {
            digit = num % 10;

            if(digit % 2 == 0)
            {
                evenSum += digit;
            }
            else
            {
                oddSum += digit;
            }

            num = num / 10;
        }

        System.out.println("Sum of Even Digits = " + evenSum);
        System.out.println("Sum of Odd Digits = " + oddSum);
    }
}

class Program18
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}