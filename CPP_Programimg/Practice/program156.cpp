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
    ArrayX aobj(5);                  

    cout<<sizeof(aobj)<<endl;       // 16

    return 0;
}