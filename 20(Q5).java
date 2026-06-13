class Logic
{
    void findSmallestDigit(int num)
    {
        int smallest = 9;

        while(num != 0)
        {
            int digit = num % 10;

            if(digit < smallest)
            {
                smallest = digit;
            }

            num = num / 10;
        }

        System.out.println("Smallest Digit = " + smallest);
    }
}

class Program20
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}