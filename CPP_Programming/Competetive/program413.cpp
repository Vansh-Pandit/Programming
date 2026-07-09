#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private:
        PNODE first;
        int iCount;

    public:
        DoublyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNO, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL()
{
    cout<<"Inside Constructor"<<endl;
    this->first = NULL;
    this->iCount = 0;
}

void DoublyLL :: Display()
{
    PNODE temp = NULL;
    temp = this->first;

    cout<<"NULL <=> ";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }

    cout<<"NULL\n";

}

int DoublyLL :: Count ()
{
    return this->iCount;
}

void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(NULL == first)
    {
        this->first = newn;
    }

    else
    {
        newn->next = this->first;
        this->first = newn;
        newn->next->prev = newn;
    }
    this->iCount++;
}

void DoublyLL :: InsertLast(int iNo)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(NULL == first)
    {
        this->first = newn;
    }

    else
    {
        temp = this->first;
        
        while(temp -> next != NULL)
        {
            temp = temp ->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }   
    this->iCount++;
}

void DoublyLL :: InsertAtPos(int iNO, int iPos)
{
    int i = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    if(iPos < 1 || iPos > iCount +1)
    {
        cout<<"Invalid input";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNO);
    }

    else if(iPos == iCount +1)
    {
        InsertLast(iNO);
    }
    else
    {
        newn = new NODE;

        newn->data = iNO;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;
        for(i =1; i<iPos-1;i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        this->iCount++;
    }
}

void DoublyLL :: DeleteFirst()
{
    PNODE temp = NULL;
    if(NULL == this->first)
    {
        return;
    }

    else if(NULL == this->first->next)
    {
        delete this->first;
        this->first = NULL;
    }

    else
    {
        this->first = this->first->next;
        delete this->first->prev;
        this->first->prev = NULL;
    }

    this->iCount--;
}

void DoublyLL :: DeleteLast()
{
    PNODE temp = NULL;
    if(NULL == this->first)
    {
        return;
    }

    else if(NULL == this->first->next)
    {
        delete this->first;
        this->first = NULL;
    }

    else
    {
        temp = this->first;

        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    
    this->iCount--;
}

void DoublyLL :: DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp = NULL;

    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Invalid input";
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
        for(i = 1; i< iPos-1;i++)
        {
            temp = temp ->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        this->iCount--;
    }
}

int main()
{
    DoublyLL dobj;

    int iChoice = 0;
    int iValue = 0;
    int iRet = 0;
    int iPosition = 0;

    while (iChoice != 9)
    {
        cout<<"--------------------------------------\n";
        cout<<"Enter your choice :\n";
        cout<<"--------------------------------------\n";
        cout<<"1 : Insert node at first Position\n";
        cout<<"2 : Insert node at Last Position\n";
        cout<<"3 : Insert node at Given Position\n";
        cout<<"4 : delete node at first Position\n";
        cout<<"5 : delete node at Last Position\n";
        cout<<"6: delete node at Given Position\n";
        cout<<"7 : Display\n";
        cout<<"8 : Count the number of elements\n";
        cout<<"9 : Terminate the Application\n";
        cout<<"--------------------------------------\n";

        cin>>iChoice;
        
        switch(iChoice)
        {
            case 1:
            cout<<"Enter the value : \n";
            cin>>iValue;
            dobj.InsertFirst(iValue);
            break;

            case 2:
            cout<<"Enter the value : \n";
            cin>>iValue;
            dobj.InsertLast(iValue);
            break;

            case 3:
            cout<<"Enter the value : \n";
            cin>>iValue;
            cout<<"Enter the Position :\n";
            cin>>iPosition;
            dobj.InsertAtPos(iValue,iPosition);
            break;

            case 4:
            dobj.DeleteFirst();
            break;

            case 5:
            dobj.DeleteLast();
            break;

            case 6:
            cout<<"Enter Position :\n";
            cin>>iPosition;
            dobj.DeleteAtPos(iPosition);
            break;

            case 7:
            cout<<"Elements of linked list are :\n";
            dobj.Display();
            break;

            case 8:
            iRet = dobj.Count();
            cout<<"No of elements are "<<iRet<<"\n";
            break;

            case 9:
            cout<<"Thank you for Marvellous Infosystems Application\n";
            break;

            default:
            cout<<"Invalid Choice\n";
            break;
        }
    }    

    return 0;
}