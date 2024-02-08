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
			while(iNo > 0)
            {
                cout<<" * ";
                iNo--;
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