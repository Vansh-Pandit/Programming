import java.util.*;

class program265
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;
        int i = 0;

        System.out.println("Enter String : ");
        Arr = sobj.nextLine();

        char str[]= Arr.toCharArray();

        for(i = 0; i< str.length; i++)
        {
            System.out.println(str[i]);
        }     
        
    }
}