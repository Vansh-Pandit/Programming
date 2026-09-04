import java.util.*;

class StringX
{
    public int CountCapital(String str)
    {
        int iCount = 0;
        int i = 0;
        for(i=0;i<str.length();i++)
        {
            if(str.charAt(i)>='A' && str.charAt(i)<='Z')
            {
                iCount++;
            }            
        }
        return iCount;  
    }
}

class program270
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();
        int iRet = 0;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);

        System.out.println("Number of Capital Chracter are : "+ iRet);


    }
}