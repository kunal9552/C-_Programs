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
				cout<<iCnt<<endl;
			}
		}
};

int main()
{
	
	Print pobj(5);
	pobj.Display();
	
	return 0;
}