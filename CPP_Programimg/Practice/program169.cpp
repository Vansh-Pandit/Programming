#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
        int *Arr ;
        int iSize;

        public:

        // parameterised contructor with default Argument 
        ArrayX(int X = 5)
        {
            iSize = X;                       
            Arr = new int[iSize];         
        }

        ~ArrayX()
        {
            delete []Arr;                  
        }

        void Accept()
        {
            cout<<"Enter the elements\n";
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements od the array are\n";
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        int Summation()
        {
            int iCnt = 0 , iSum =0;

            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return iSum;
        }

};

int main()
{                   
    ArrayX *aobj = NULL;
    int iLength = 0 , iRet = 0 ;

    cout <<"Enter the number of elements\n";
    cin>>iLength;

    aobj = new ArrayX[iLength];

    aobj->Accept();
    aobj->Display();
    
    iRet = aobj->Summation();

    cout<<"Summation is : "<<iRet<<endl;

    delete aobj;

    return 0;
}