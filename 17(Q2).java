class Logic
{
    void checkPalindrome(int num)
    {
        int original = num;
        int reverse = 0;

        while(num != 0)
        {
            reverse = reverse * 10 + (num % 10);
            num = num / 10;
        }

        if(original == reverse)
        {
            System.out.println("Palindrome Number");
        }
        else
        {
            System.out.println("Not a Palindrome Number");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}