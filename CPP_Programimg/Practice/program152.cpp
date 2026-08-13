#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int Summation(int Arr[], int iSize)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }
};

int main()
{
    int *Brr= NULL;
    int iLength = 0, iCnt =0, iRet = 0;
    ArrayX aobj;

    cout<<"Enter number of elements\n";
    cin>>iLength;

    Brr = new int[iLength];

    cout<<"Enter the elements \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Elements of array are \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    aobj.Summation(Brr, iLength);

    cout<<"Summation is : "<<iRet<<endl;

    delete []Brr;
    return 0;
}