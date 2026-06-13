class Logic
{
    void findLargestDigit(int num)
    {
        int largest = 0;

        while(num != 0)
        {
            int digit = num % 10;

            if(digit > largest)
            {
                largest = digit;
            }

            num = num / 10;
        }

        System.out.println("Largest Digit = " + largest);
    }
}

class Program20
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}