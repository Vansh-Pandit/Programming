/*
    iRow = 4
    iCol = 4

    a   b   c   d
    1   2   3   4
    a   b   c   d
    1   2   3   4

    
 */

import java.util.*;

class Pattern
{
    public void display(int iRow , int iCol)
    {
        int i = 0, j= 0;
        char ch ='\0';
        char Arr[] = {'#','$'};
        for(i = 1; i <= iRow; i++)
        {
            for(j= 1, ch = 97; j <= iCol; j++, ch++)
            {
                if(i % 2 == 0)
                {
                    System.out.print(j+"\t");
                }
                else
                {
                    System.out.print(ch+"\t");
                }                
            }
            System.out.println();
        }
    }
}
class program206
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of column : ");
        iValue2 = sobj.nextInt();
        
        Pattern pobj = new Pattern();

        pobj.display(iValue1,iValue2);

    }
}