import java.util.*;

class StringX
{
    public int CountSmall(String str)
    {
        int iCount = 0;
        int i = 0;
        char Arr[] = str.toCharArray();
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i]>='a' && Arr[i]<='z')
            {
                iCount++;
            }            
        }
        return iCount;  
    }

    public int CountCapital(String str)
    {
        int iCount = 0;
        int i = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i]>='A' && Arr[i]<='Z')
            {
                iCount++;
            }            
        }
        return iCount;  
    }

    public int CountDigits(String str)
    {
        int iCount = 0;
        int i = 0;
        char Arr[] = str.toCharArray();
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i]>='0' && Arr[i]<='9')
            {
                iCount++;
            }            
        }
        return iCount;  
    }

    public int CountSpace(String str)
    {
        int iCount = 0;
        int i = 0;
        char Arr[] = str.toCharArray();
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i]== ' ')
            {
                iCount++;
            }            
        }
        return iCount;  
    }

    public int CountSpecial(String str)
    {
        int iCount = 0;
        int i = 0;
        char Arr[] = str.toCharArray();
        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i]>= '!' && Arr[i]<= '/')||
            (Arr[i]>= ':' && Arr[i]<= '@')||
            (Arr[i]>= '[' && Arr[i]<= '`')||
            (Arr[i]>= '{' && Arr[i]<= '~'))
            {
                iCount++;
            }            
        }
        return iCount;  
    }
}

class program276
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();
        int iRet = 0;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        iRet = strobj.CountSmall(data);
        System.out.println("Number of Small Chracter are : "+ iRet);

        iRet = strobj.CountCapital(data);
        System.out.println("Number of Capital Chracter are : "+ iRet);

        iRet = strobj.CountDigits(data);
        System.out.println("Number of Digit are : "+ iRet);

        iRet = strobj.CountSpace(data);
        System.out.println("Number of Space are : "+ iRet);

        iRet = strobj.CountSpecial(data);
        System.out.println("Number of Special Symbol are : "+ iRet);


    }
}