#include<iostream>
using namespace std;

class division
{
	public:
		double dNo1;
		double dNo2;
		
		division(int x, int y)
		{
			dNo1 = x;
			dNo2 = y;
		}
		
		double Divide()
		{
			double dAns = 0;
			dAns = ((double)dNo1/dNo2);
			return dAns;
		}
		
};

int main()
{
	double dValue1 = 0;
	double dValue2 = 0;
	double dRet = 0;
	
	cout<<"Enter First Number : "<<"\n";
	cin>>dValue1;
	
	cout<<"Enter second number : "<<"\n";
	cin>>dValue2;
	
	
	division dobj(dValue1,dValue2);
	dRet = dobj.Divide();
	
	cout<<"Division is : "<<dRet<<endl;
	
	return 0;
}
