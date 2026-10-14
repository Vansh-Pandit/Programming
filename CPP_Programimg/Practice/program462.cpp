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
{}
void Stack :: Push(int iNo)   
{}      
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
{}

int main()
{
    Stack sobj;

    return 0;
}