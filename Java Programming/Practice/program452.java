class node
{
    public int data;
    public node next;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
    private node first;
    private int iCount;

    public SinglyLL()
    {
        this.first = null;
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
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(this.first == null)
        {
            this.first = newn;
        }

        else
        {
            newn.next = this.first;
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
            first = newn;
        }

        else
        {
            temp = first;
            while(temp.next != null)
            {
                temp =  temp.next;
            }

            temp.next = newn;
        }
        iCount++;
    }

    public void InsertAtPos(int iNo, int iPos)
    {}

    public void DeleteFirst()
    {}

    public void DeleteLasst()
    {}

    public void DeleteAtPos(int iPos)
    {}

}

class program452
{
    public static void main(String A [])
    {
        
    }
}