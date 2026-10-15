abstract class Demo
{
    public int i,j;
    public int Add(int a, int b)    // Concrete Method
    {
        return a+b;
    }

    
}


class Abstract_Demo
{
    public static void main(String A [])
    {
        Demo dobj = new Demo();
    }
}