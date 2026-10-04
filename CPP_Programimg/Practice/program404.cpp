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
        cout<<" | "<<temp->data<<" | -> ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

int SinglyLL :: Count ()
{
    return this->iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{}

void SinglyLL :: InsertLast(int iNo)
{}

void SinglyLL :: InsertAtPos(int iNO, int iPos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DeleteLast()
{}

void SinglyLL :: DeleteAtPos(int iPos)
{}

int main()
{
    SinglyLL sobj;
    
    sobj.Display();

    return 0;
}