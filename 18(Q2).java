class Logic
{
    void printEvenNumbers(int n)
    {
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                System.out.print(i + " ");
            }
        }
    }
}

class Program18
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}