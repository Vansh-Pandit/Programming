class Logic
{
    void printReverse(int n)
    {
        for(int i = n; i >= 1; i--)
        {
            System.out.print(i + " ");
        }
    }
}

class Program20
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}