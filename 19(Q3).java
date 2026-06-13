class Logic
{
    void checkDivisible(int num)
    {
        if(num % 5 == 0 && num % 11 == 0)
        {
            System.out.println(num + " is divisible by 5 and 11");
        }
        else
        {
            System.out.println(num + " is not divisible by 5 and 11");
        }
    }
}

class Program19
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkDivisible(55);
    }
}