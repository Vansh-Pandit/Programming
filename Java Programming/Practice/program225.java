/*
    iRow = 4
    iCol = 4
    
    
    a
    a   b
    a   b   c
    a   b   c   d
    
 */

import java.util.*;

class Pattern
{
    public void display(int iRow , int iCol)
    {
        int i = 0, j= 0;
        char ch = '\0';       
    
        for(i = 1; i <= iRow; i++)
        {
            for(j= 1, ch = 'a'; j <= iCol; j++, ch++)
            { 
                if(j <= i)
                {
                    System.out.print(ch+"\t");
                }                
                                
                
                                    
            }
            System.out.println();
        }
    
    }
}
class program225
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