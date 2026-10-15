class Demo
{
    public int i;
    private int j;
    protected int k;

    public Demo()
    {
        i =0;
        j =0;
        k =0;
    }

    public void display()
    {
        System.out.println("Value of i : "+i);      // Allowed
        System.out.println("Value of j : "+j);      // Allowed
        System.out.println("Value of k : "+k);      // Allowed

    }
}

class Access 
{
    public static void main(String A[])
    {
        Demo dobj = new Demo();
        dobj.display();

        System.out.println("Value of i : "+dobj.i);     // Allowed
        System.out.println("Value of j : "+dobj.j);     // Not Allowed
        System.out.println("Value of k : "+dobj.k);     // ????

    }
}