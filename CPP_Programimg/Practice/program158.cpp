#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr ;
        int iSize;

        // parameterized Constructor
        ArrayX(int X)
        {
            cout<<"Inside constructor\n";
            iSize = X;                       // Characteristics initialiser
            Arr = new int[iSize];         // resourse allocation
        }

        // distructor
        ~ArrayX()
        {
            cout<<"Inside distructor\n";
            delete []Arr;                   // resourse deallocation
        }

};

int main()
{
    ArrayX aobj1(5);                   
      

    return 0;
}