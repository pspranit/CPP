#include<iostream>

using namespace std;

int MaxI(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
	
	double MaxD(double x,double y)
	{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
	}
	
	char MaxC(char x,char y)
	{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int i=10,j=20,iret=0;
	iret=MaxI(i,j);
	cout<<"Max is:"<<iret<<"\n";
	
	double a=3.10,b=6.10,dret=0;
	dret=MaxD(a,b);
	cout<<"Max is:"<<dret<<"\n";
	
	char ch1='G',ch2='A',cret;
	cret=MaxC(ch1,ch2);
	cout<<"Max is:"<<cret<<"\n";
	return 0;
}