#include<iostream>
using namespace std;

class Base
{
	public:
	int x,y;
	
	Base()
	{
		cout<<"Base Constructor\n";
	}
	
	 virtual ~Base()
	{
		cout<<"base Destructor\n";
	}
	};
	
	class Derived : public Base
	{
		public:
		int i,j;
		
		Derived()
		{
			cout<<"Derived constructor\n";
		}
		 ~Derived()
		{
			cout<<"Derived Destructor\n";
		}
};

int main()
{
    cout<<"Size of Base : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
    Base *bp = new Derived;
    delete bp; 
    return 0;
}