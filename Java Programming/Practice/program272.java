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
}

class program272
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


    }
}