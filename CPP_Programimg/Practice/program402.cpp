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
        SinglyLL()
        {
            cout<<"Inside Constructor"<<endl;
            this->first = NULL;
            this->iCount = 0;
        }

        void Display()
        {}
        
        int Count()
        {
            return this->iCount;
        }

        void InsertFirst(int iNo)
        {}

        void InsertLast(int iNo)
        {}

        void InsertAtPos(int iNO, int iPos)
        {}

        void DeleteFirst()
        {}

        void DeleteLast()
        {}

        void DeleteAtPos(int iPos)
        {}
};

int main()
{
    SinglyLL sobj;
    
    

    return 0;
}