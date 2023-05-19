#include<iostream>
using namespace std;

class Demo
{
	public:
	
	inline int Add(int i,int j)
	{
		return i+j;
	}
	int Sub(int,int);
};

int Demo :: Sub(int i,int j)
{
	return i-j;
};

int main()
{
	Demo obj;
	int iret=0;
	int a,b;
	
	cout<<"Enter two no\n";
	cin>>a>>b;

	iret=obj.Add(a,b);
	cout<<"Addition of 2 no\n"<<iret<<"\n";

	iret=obj.Sub(a,b);
	cout<<"Sub of 2 no\n"<<iret;
	
	
	return 0;
}
		