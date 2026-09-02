import java.util.*;

class program264
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;
        int i = 0;

        System.out.println("Enter String : ");
        Arr = sobj.nextLine();

        for(i = 0; i< Arr.length(); i++)
        {
            System.out.println(Arr.charAt(i));
        }     
        
    }
}