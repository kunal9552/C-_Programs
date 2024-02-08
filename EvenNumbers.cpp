#include<iostream>
using namespace std;

class Even
{
    public:
        int iNo;
        
    Even(int a)
    {
        iNo = a;
    }

    void Display()
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= (iNo*2); iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                cout<<iCnt<<"\n";
            }
        }
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    Even obj(iValue);
    obj.Display();

    return 0;
}