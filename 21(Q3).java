class Logic
{
    void displayFactors(int num)
    {
        System.out.println("Factors are:");

        for(int i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                System.out.print(i + " ");
            }
        }
    }
}

class Program21
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}