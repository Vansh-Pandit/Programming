class Logic
{
    void productOfDigits(int num)
    {
        int product = 1;

        while(num != 0)
        {
            product = product * (num % 10);
            num = num / 10;
        }

        System.out.println("Product = " + product);
    }
}

class Program21
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}