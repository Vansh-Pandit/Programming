

import java.util.*;

class ArrayIndex 
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[]= {11,21,51,101,111};

        System.out.println("enter the index of array");
        int index = sobj.nextInt();
        
        System.out.println("Element at that index is : "+ Arr[index]);

        System.out.println("End of apllication");
    }
}