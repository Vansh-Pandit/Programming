import java.util.*;

class ArrayIndexException
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[]= {11,21,51,101,111};

        System.out.println("enter the index of array");
        int index = sobj.nextInt();
        try
        {
            System.out.println("Inside try block");
            System.out.println("Element at that index is : "+ Arr[index]);
        }
        catch(ArrayIndexOutOfBoundsException aobj)
        {
            System.out.println("exception occured : "+ aobj);
        }
        System.out.println("End of apllication");
    }
}