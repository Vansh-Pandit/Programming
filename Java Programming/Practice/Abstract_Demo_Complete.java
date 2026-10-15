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
    public int sub(int a, int b)
    {
        return a-b;
    }
}


class Abstract_Demo_Complete
{
    public static void main(String A [])
    {
        Hello hobj = new Hello();

        System.out.println(hobj.Add(10,11));
        System.out.println(hobj.sub(10,11));
        
    }
}