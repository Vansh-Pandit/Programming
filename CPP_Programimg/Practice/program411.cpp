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
    this->iCount--;
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

        this->iCount--;
    }
}

int main()
{
    int iRet = 0;
    SinglyLL sobj;
    
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);


    sobj.Display();
    iRet = sobj.Count();
    cout<<"No of elements are "<<iRet<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"No of elements are "<<iRet<<endl;

    sobj.DeleteFirst();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"No of elements are "<<iRet<<endl;

    sobj.DeleteLast();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"No of elements are "<<iRet<<endl;

    sobj.InsertAtPos(105,3);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"No of elements are "<<iRet<<endl;    

    return 0;
}