#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{

    public:
        int *Arr ;
        int iSize;

};

int main()
{
    ArrayX aobj;

    cout<<sizeof(aobj)<<endl;       

    return 0;
}