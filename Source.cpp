#include<iostream>
using namespace std;
class Math{
public:
	char math[225];
	bool isValid()
	{
		int countopening=0,countclosing=0;
		for(int i=0;math[i]!='\0';i++)
		{
			if(math[i]=='(')
				countopening++;
			if(math[i]==')')
				countclosing++;
			if(countclosing==0)
			{
				if(math[i]==')')
				{
					return false;
				}
			}
		}
		if(countopening==countclosing)
		{
			return true;
		}
		return false;
	}
};
int main()
{
	Math m;
	cout<<"enter a mathematical phrase:";
	cin>>m.math;
	if(m.isValid())
	{
		cout<<"is wright"<<endl;
	}
	else
	{
		cout<<"is wrong"<<endl;
	}
	return 0;
}