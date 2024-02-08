#include<iostream>
using namespace std;

class Check
{
	public:
		int iNo;
		bool Flag;

		Check(int x)
		{
			iNo = x;
		}
		
		bool check()
		{
			if((iNo % 2) ==  0)
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
	
	Check pobj(iValue);
	bRet = pobj.check();

    if(bRet == true)
    {
        cout<<"Number is Even \n";
    }
    else
    {
        cout<<"Number is Odd \n";
    }
	
	return 0;
}