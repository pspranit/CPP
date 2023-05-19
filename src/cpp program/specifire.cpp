#include<iostream>
using namespace std;

class Demo
{
	public:
	int a;
	//private:
	int b;
	//protected:
	int c;
	
	public:
	Demo(int i,int j,int k)
	{
		cout<<"Constructor\n";
		this->a=i;
		this->b=j;
		this->c=k;
	}
	void Fun()
	{
		cout<<"Value of A:"<<this->a<<"\n";
		cout<<"Value of B:"<<this->b<<"\n";
		cout<<"Value of C:"<<this->c<<"\n";
	}
};
int main()
{
	cout<<"inside main\n";
	Demo *p=new Demo(10,20,30);
	cout<<"value of A:"<<p->a<<"\n";
	cout<<"value of B:"<<p->b<<"\n";
	cout<<"value of C:"<<p->c<<"\n";
	p->Fun();
	delete p;
	return 0;
}
	
	
	
	
	
	
	