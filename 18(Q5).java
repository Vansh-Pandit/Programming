class Logic
{
    void checkSign(int num)
    {
        if(num > 0)
        {
            System.out.println("Positive Number");
        }
        else if(num < 0)
        {
            System.out.println("Negative Number");
        }
        else
        {
            System.out.println("Zero");
        }
    }
}

class Program18
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}