class node
{
    public int data;
    public node next;
    public node prev;

    node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class doublyLL
{
    private node first;
    private node tail;
    private int iCount;

    public doublyLL()
    {
        this.first = null;
        this.tail = null;
        this.iCount = 0;
    }

    public int Count()
    {
        return iCount;
    }
    public void Display()
    {
        node temp = null;

        temp = this.first ;
        while(temp != null)
        {
            System.out.printf("| %d | -> ",temp.data);
            temp = temp.next;
        }
        System.out.println();
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(this.first == null)
        {
            this.first = newn;
            this.tail = newn;
        }

        else
        {
            newn.next = this.first;
            this.first.prev = newn;
            this.first = newn;
        }
        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);
        node temp = null;

        if(first == null)
        {
            this.first = newn;
            this.tail = newn;
        }

        else
        {
            temp = this.tail;

            temp.next = newn;
            newn.prev = temp;
            this.tail = newn;
        }
        iCount++;
    }

    public void InsertAtPos(int iNo, int iPos)
    {
        node newn = null;
        node temp = null;
        int i = 0;

        if(iPos < 1 || iPos > iCount + 1)
        {
            return;
        }
        
        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == iCount + 1)
        {
            InsertLast(iNo);
        }
        else 
        {
            newn = new node(iNo);

            temp = first;

            for(i = 1;i<iPos-1;i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            newn.prev = temp;

            temp.next.prev = newn;
            temp.next = newn;

            iCount++;
        }
    }

    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
            tail = null;
        }
        else 
        {
            first = first.next;
            first.prev = null;
        }
        iCount--;
    }

    public void DeleteLast()
    {

        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
            tail = null;
        }
        else
        {
            tail = tail.prev;
            tail.next = null;
        }
        iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        node temp = null;
        int i = 0;

        if(iPos < 1 || iPos > iCount)
        {
            return;
        }
        
        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount )
        {
            DeleteLast();
        }
        else 
        {
            temp = first;

            for(i = 1;i<iPos-1;i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            temp.next.prev = temp;

            iCount--;
        }
    }

}

class program457
{
    public static void main(String A [])
    {
        int iRet = 0;
        doublyLL sobj = new doublyLL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);   
        
        sobj.DeleteFirst();
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);   

        sobj.DeleteLast();
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);   

        sobj.InsertAtPos(105, 4);
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet); 

        sobj.DeleteAtPos(4);
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of nodes are : "+iRet);  
    }
}