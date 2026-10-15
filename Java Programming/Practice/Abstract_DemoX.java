abstract class Demo
{
    public int i,j;
    public int Add(int a, int b)    // Concrete Method
    {
        return a+b;
    }

    public abstract int sub(int a, int b);

}

class Hello extends Demo
{
     
}


class Abstract_DemoX
{
    public static void main(String A [])
    {
        Hello hobj = new Hello();
    }
}