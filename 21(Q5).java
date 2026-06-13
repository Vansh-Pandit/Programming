class Logic
{
    void printDivisibleBy2and3(int n)
    {
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0 && i % 3 == 0)
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
        obj.printDivisibleBy2and3(30);
    }
}