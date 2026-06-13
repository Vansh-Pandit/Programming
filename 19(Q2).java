class Logic
{
    void displayGrade(int marks)
    {
        if(marks >= 75)
        {
            System.out.println("Grade A");
        }
        else if(marks >= 60)
        {
            System.out.println("Grade B");
        }
        else if(marks >= 50)
        {
            System.out.println("Grade C");
        }
        else if(marks >= 35)
        {
            System.out.println("Grade D");
        }
        else
        {
            System.out.println("Fail");
        }
    }
}

class Program19
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}