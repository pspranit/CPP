#include<iostream>
using namespace std;

class Base
{
	public:
	int x,y;
	
	base()
	{
		cout<<"Base constructor\n";
	}
	
	virtual ~Base()=0;
	
	void fun()
	{
		cout<<"Base Fun\n";
	}
	};
	Base::~Base()
	{
	}
	
	class Derived : public Base
	{
		public:
		int i,j;
		Derived()
		{
			cout<<"Derived Constructor\n";
		}
		};
		
		int main()
		{
			Derived obj;
			obj.fun();
			return 0;
		}