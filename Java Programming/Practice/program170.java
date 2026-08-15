import java.util.Scanner;

class ArrayX
{
    
    private int Arr[] ;
    private int iSize;

    public ArrayX(int X)
    {
        iSize = X;                       
        Arr = new int[iSize];         
    }       

    public void Accept()
    {
        System.out.println("Enter elements");
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements are ");
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public int Summation()
    {
        int iCnt = 0 , iSum =0;

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }

}

class program170
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter number of elemenst");
        iValue = sobj.nextInt();
        ArrayX aobj = new ArrayX(iValue);

        aobj.Accept();
        aobj.Display();

        aobj = null;
        System.gc();
    }
}