#include<iostream>

using namespace std;

#pragma pack(1)
template<class C>
struct node
{
    C data;
    struct node* next;
};

#pragma pack(1)
template<class C>
class Stack
{
    private:
        struct node<C>* first;
        int iCount;

    public:
        Stack();
        void Push(C iNo);         // InsertFirst
        C pop();                  // DeleteFirst
        C peep();                 // DeleteFirst
        int Count();
        void Display();
};

template<class C>
Stack<C> :: Stack()
{
    first = NULL;
    iCount = 0;
}

template<class C>
void Stack<C> :: Push(C iNo)   
{
    struct node<C>* newn = NULL;

    newn = new struct<C> node();

    newn->data = iNo;
    newn->next = NULL;

    newn->next = this->first;
    this->first = newn;

    iCount++;
}    

template<class C>  
C Stack<C> :: pop()     
{
    C iValue = 0;
    struct node<C> *temp = NULL;

    if(first == NULL)
    {
        cout<<"Stack is empty\n";
        return -1;
    }

    else
    {
        temp = first;
        iValue = first->data;
        first = first->next;

        delete temp;
    }   

    iCount--;
    return iValue;
}   

template<class C>         
C Stack<C> :: peep()   
{
    C iValue = 0;

    if(first == NULL)
    {
        cout<<"Stack is empty\n";
        return -1;
    }

    else
    {
        iValue = first->data;
        return iValue;
    }
}        

template<class C>     
int Stack<C> :: Count()
{
    return iCount;
}

template<class C>
void Stack<C> :: Display()
{
    struct node<C> *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp->next;
    }
}

int main()
{
    Stack <int>sobj;
    int iRet = 0;

    iRet = sobj.pop();
    cout<<"Removed element is : "<<iRet<<"\n"; 

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    sobj.Display();
    iRet = sobj.Count();

    cout<<"Elements in the stack are : "<<iRet<<"\n";   
    
    iRet = sobj.pop();
    cout<<"Poped element is : "<<iRet<<"\n";   

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements in the stack are : "<<iRet<<"\n";   

    iRet = sobj.peep();
    cout<<"Peeped element is : "<<iRet<<"\n";   

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements in the stack are : "<<iRet<<"\n";   
    
    return 0;
}