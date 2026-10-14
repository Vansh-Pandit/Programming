#include<iostream>

using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node* next;
};

#pragma pack(1)
class Stack
{
    private:
        struct node* first;
        int iCount;

    public:
        Stack();
        void Push(int iNo);         // InsertFirst
        int pop();                  // DeleteFirst
        int peep();                 // DeleteFirst
        int Count();
        void Display();
};

Stack :: Stack()
{
    this->first = NULL;
    this->iCount = 0;
}
void Stack :: Push(int iNo)   
{
    struct node* newn = NULL;

    newn = new struct node();

    newn->data = iNo;
    newn->next = NULL;

    newn->next = this->first;
    this->first = newn;

    iCount++;
}      
int Stack :: pop()     
{
    return 0;
}            
int Stack :: peep()   
{
    return 0;
}             
int Stack :: Count()
{
    return iCount;
}
void Stack :: Display()
{
    struct node *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}

int main()
{
    Stack sobj;
    int iRet = 0;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    sobj.Display();
    iRet = sobj.Count();

    cout<<"Elements in the stack are : "<<iRet<<"\n";    

    return 0;
}