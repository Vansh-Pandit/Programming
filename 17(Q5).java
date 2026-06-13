class Logic
{
    void printTable(int num)
    {
        for(int i = 1; i <= 10; i++)
        {
            System.out.println(num + " * " + i + " = " + (num * i));
        }
    }
}

class Program17
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}