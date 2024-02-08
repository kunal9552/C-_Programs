#include<iostream>
using namespace std;

class Four
{
	public:
		int iNo;
		
		Four(int x)
		{
			iNo = x;
		}
		
		bool ChkNO()
		{
			if((iNo % 5) == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}	
};

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	cout<<"Enter Number : "<<endl;
	cin>>iValue;
	
	Four fobj(iValue);
	iRet = fobj.ChkNO();
	
	if(iRet == 1)
	{
		cout<<"Number is Divisible By 5"<<endl;
	}
	else
	{
		cout<<"Number is Not Divisible by 5"<<endl;
	}
	
}
