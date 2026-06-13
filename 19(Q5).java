class Logic
{
    void calculatePower(int base, int exp)
    {
        int result = 1;

        for(int i = 1; i <= exp; i++)
        {
            result = result * base;
        }

        System.out.println(base + "^" + exp + " = " + result);
    }
}

class Program19
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}