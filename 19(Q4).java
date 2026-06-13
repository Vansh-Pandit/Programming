class Logic
{
    void printDigits(int num)
    {
        while(num != 0)
        {
            int digit = num % 10;
            System.out.println(digit);
            num = num / 10;
        }
    }
}

class Program19
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printDigits(9876);
    }
}