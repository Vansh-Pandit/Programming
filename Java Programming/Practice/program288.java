import java.util.*;
class StringX
{
    public String ToUpperX(String str)
    {
        char Arr[] = str.toCharArray();
        int i = 0;

        for(i = 0; i< Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <='z')
            {
                Arr[i] = (char)(Arr[i] - 32);
            }         
        }

        return new String (Arr);
    }

    public String ToLowerX(String str)
    {
        char Arr[] = str.toCharArray();
        int i = 0;

        for(i = 0; i< Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <='Z')
            {
                Arr[i] = (char)(Arr[i] + 32);
            }         
        }

        return new String (Arr);
    }

    public String Toggle(String str)
    {
        char Arr[] = str.toCharArray();
        int i = 0;

        for(i = 0; i< Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <='Z')
            {
                Arr[i] = (char)(Arr[i] + 32);
            } 
            else                                    // issue
            {
                Arr[i] = (char)(Arr[i] - 32);
            }        
        }

        return new String (Arr);
    }
}

class program288

{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null, sRet = null;
        StringX strobj = new StringX();

        System.out.println("Enter String");
        data = sobj.nextLine();


        sRet = strobj.Toggle(data);
        System.out.println("Updated string is : "+sRet);

        sRet = strobj.ToUpperX(data);
        System.out.println("Updated string is : "+sRet);


        sRet = strobj.ToLowerX(data);
        System.out.println("Updated string is : "+sRet);
        


    }
}