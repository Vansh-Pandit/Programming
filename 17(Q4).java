class Logic
{
    void findMin(int a, int b, int c)
    {
        int min = a;

        if(b < min)
        {
            min = b;
        }

        if(c < min)
        {
            min = c;
        }

        System.out.println("Minimum number is : " + min);
    }
}

class Program17
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }
}