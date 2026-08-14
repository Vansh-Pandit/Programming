#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{

    public:
        int *Arr ;
        int iSize;

        ArrayX(int X)
        {

        }

};

int main()
{
    ArrayX aobj;                    // Error

    cout<<sizeof(aobj)<<endl;       
    return 0;
}