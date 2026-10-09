#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;


class SinglyCl
{
    private:
        int iCount;
        PNODE first;
        PNODE last;

    public:
        SinglyCl();
};

SinglyCl :: SinglyCl ()
{
    cout<<"Inside constructor\n";
    this->iCount = 0;
    this->first = NULL;
    this->last = NULL;
}
int main()
{
    SinglyCl sobj;

    return 0;
}