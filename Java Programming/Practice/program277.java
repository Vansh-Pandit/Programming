import Marvelluos.StringX;
import java.util.*;

class program277
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();         // Error
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