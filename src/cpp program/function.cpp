#include<iostream>
using namespace std;

void fun(int x)
{
	x++;
}
void gun(int *p)
{
   (*p)++;
}
void sun(int &ref)
{
	ref++;
}

int main()
{
	int a=10,b=10,c=10;
	
	cout<<"before call to fun=>"<<a<<"\n";
	fun(a);
	cout<<"after call to fun=>"<<a<<"\n";
	
	
	cout<<"before call to gun=>"<<b<<"\n";
	gun(&b);
	cout<<"after call to gun=>"<<b<<"\n";
	
	cout<<"before call to sun=>"<<c<<"\n";
	sun(c);
	cout<<"after call to sun=>"<<c<<"\n";
	return 0;
}