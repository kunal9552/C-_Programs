#include<iostream>
using namespace std;

class Print
{
	public:
		int iNo;
		
		Print(int x)
		{
			iNo = x;
		}
		
		void Display()
		{
			int iCnt = 0;
			for(iCnt = 1; iCnt <= iNo; iCnt++)
			{
				cout<<"Marvellous"<<endl;
			}
		}
};

int main()
{
	int iValue = 0;
	
	cout<<"Enter the Numeber : "<<endl;
	cin>>iValue;
	
	Print pobj(iValue);
	pobj.Display();
	
	return 0;
}