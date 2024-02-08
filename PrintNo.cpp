#include<iostream>
using namespace std;

class Print
{
    public:
        int iNo1;
        int iNo2;
    
    Print(int a, int b)
    {
        iNo1 = a;
        iNo2 = b;
    }

    void Display()
    {
        cout<<"Number is : \n";
        for(int i = 1; i <= iNo2; i++)
        {
            cout<<iNo1<<"\n";
        }
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the first Number : \n";
    cin>>iValue1;

    cout<<"Enter the Second Number : \n";
    cin>>iValue2;

    Print obj(iValue1,iValue2);
    obj.Display();

    return 0;
}