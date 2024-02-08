#include<iostream>
using namespace std;

class Five
{
	public:
		int iNo;
		
		Five(int x)
		{
			iNo = x;
		}
		
		void Display()
		{
			if(iNo < 10)
            {
                cout<<"Hello";
            }
            else
            {
                cout<<"Demo";
            }
		}
	
};

int main()
{
	int iValue = 0;

	cout<<"Enter Number : "<<endl;
	cin>>iValue;
	
	Five fobj(iValue);
	fobj.Display();
	
	return 0;
}