class Logic
{
    void checkPrime(int num)
    {
        int i;
        boolean flag = true;

        if(num <= 1)
        {
            flag = false;
        }
        else
        {
            for(i = 2; i <= num / 2; i++)
            {
                if(num % i == 0)
                {
                    flag = false;
                    break;
                }
            }
        }

        if(flag)
        {
            System.out.println(num + " is Prime");
        }
        else
        {
            System.out.println(num + " is Not Prime");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}