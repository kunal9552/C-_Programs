#include<iostream>
using namespace std;

class Three
{
	
	public: void Display()
	{
		int iCnt = 0;
		for(iCnt = 5; iCnt >= 1; iCnt--)
		{
			cout<<iCnt<<endl;
		}
	}
};

int main()
{
	Three tobj;
	tobj.Display();
	
	return 0;
}