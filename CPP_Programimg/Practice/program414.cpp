#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
    private:
        PNODE first;
        int iCount;

    public:
        SinglyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNO, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyLL::SinglyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

void SinglyLL :: Display()
{
    PNODE temp = NULL;
    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

int SinglyLL :: Count ()
{
    return this->iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if(NULL == this->first)
    {
        this->first = newn;
    }

    else
    {
        newn->next = this->first;
        this->first = newn;
    }

    this->iCount++;
}

void SinglyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    temp = this->first;

    if(NULL == this->first)
    {
        this->first = newn;
    }

    else
    {
        while(temp->next != NULL)
        {
            temp = temp ->next;
        }

        temp->next = newn;
    }
    
    this->iCount++;
}

void SinglyLL :: InsertAtPos(int iNO, int iPos)
{
    int i = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    if(iPos < 1 || iPos > iCount +1)
    {
        cout<<"Invalid POsition"<<endl;
    }
    if(iPos == 1)
    {
        this->InsertFirst(iNO);
    }

    else if(iPos > iCount + 1)
    {
        this->InsertLast(iNO);
    }

    else
    {
        temp = this->first;
        newn = new NODE;
        newn->data = iNO;
        newn->next = NULL;
        
        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next = newn;

        this->iCount--;
    }
}

void SinglyLL :: DeleteFirst()
{
    PNODE temp = NULL;

    if(NULL == this->first)
    {
        return;
    }

    else if(NULL == this->first->next)
    {
        delete(this->first);
        this->first = NULL;
    }    
    else
    {
        temp = this->first;

        this->first = this->first->next;
        delete(temp);
    }
    this->iCount++;
}

void SinglyLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(NULL == this->first)
    {
        return;
    }

    else if(NULL == this->first->next)
    {
        delete(this->first);
        this->first = NULL;
    }    
    else
    {
        temp = this->first;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete(temp->next);
        temp->next = NULL;
    }
    this->iCount--;

}

void SinglyLL :: DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp = NULL;
    PNODE target = NULL;

    if(iPos < 1 || iPos > iCount +1)
    {
        cout<<"Invalid POsition"<<endl;
    }
    if(iPos == 1)
    {
        this->DeleteFirst();
    }

    else if(iPos > iCount + 1)
    {
        this->DeleteLast();
    }

    else
    {
        temp = this->first;
        
        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        } 

        target = temp->next;

        temp->next = target->next;
        delete target;

        this->iCount--;
    }
}

int main()
{
    SinglyLL sobj;

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
        cout<<"5 : delete node at Given Position\n";
        cout<<"6 : Display\n";
        cout<<"8 : Count the number of elements\n";
        cout<<"9 : Terminate the Application\n";
        cout<<"--------------------------------------\n";

        cin>>iChoice;
        
        switch(iChoice)
        {
            case 1:
            cout<<"Enter the value : \n";
            cin>>iValue;
            sobj.InsertFirst(iValue);
            break;

            case 2:
            cout<<"Enter the value : \n";
            cin>>iValue;
            sobj.InsertLast(iValue);
            break;

            case 3:
            cout<<"Enter the value : \n";
            cin>>iValue;
            cout<<"Enter the Position :\n";
            cin>>iPosition;
            sobj.InsertAtPos(iValue,iPosition);
            break;

            case 4:
            sobj.DeleteFirst();
            break;

            case 5:
            sobj.DeleteLast();
            break;

            case 6:
            cout<<"Enter Position :\n";
            cin>>iPosition;
            sobj.DeleteAtPos(iPosition);
            break;

            case 7:
            cout<<"Elements of linked list are :\n";
            sobj.Display();
            break;

            case 8:
            iRet = sobj.Count();
            cout<<"No of elements are \n"<<iRet;
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