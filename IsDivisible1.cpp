#include<iostream>
using namespace std;

class Print
{
	public:
		int iNo;
		bool Flag;

		Print(int x)
		{
			iNo = x;
		}
		
		bool check()
		{
			if((iNo % 5) ==  0)
            {
                Flag = true;        
            }
            else
            {
                Flag = false;
            }
            return Flag;
		}
};

int main()
{
	int iValue = 0;
	bool bRet = false;

	cout<<"Enter the Numeber : "<<endl;
	cin>>iValue;
	
	Print pobj(iValue);
	bRet = pobj.check();

    if(bRet == true)
    {
        cout<<"Number is Divisible by 5\n";
    }
    else
    {
        cout<<"Not divisible by 5\n";
    }
	
	return 0;
}