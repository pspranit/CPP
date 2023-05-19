#include<iostream>
using namespace std;

class Demo
{
	public:
	int ino1;
	int ino2;
	
	Demo(int i=10,int j=20)
	{
		ino1=i;
		ino2=j;
	}
	void Display(int x)
	{
		cout<<"value of no1 is:"<<ino1<<"\n";
		cout<<"value of no2 is:"<<ino2<<"\n";
		cout<<"value of X is:"<<x<<"\n";
	}
};
		
int main()
{
	Demo obj1;
	Demo obj2(11);
	Demo obj3(11,21);
	
	obj1.Display(51);
	obj2.Display(51);
	obj3.Display(51);
	return 0;
}