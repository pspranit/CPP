#include<iostream>
using namespace std;

class Demo
{
	public:
	/*float Area(float fradius,float FPI)
	{
		float fans=0.0;
		fans=FPI*fradius*fradius;
		return fans;
	}*/
	
	float Area(float fradius=10.5,float FPI=3.14)
	{
		float fans=0.0;
		fans=FPI*fradius*fradius;
		return fans;
	}
};
	
int main()
{
	float fvalue1=0.0,fvalue2=0.0,fret=0.0;
	cout<<"enter radius\n";
	cin>>fvalue1;
	cout<<"enter value of PI\n";
	cin>>fvalue2;
	
	Demo obj;
	
	fret=obj.Area(fvalue1,fvalue2);
	cout<<"Area of circle is:"<<fret<<"\n";
	
	fret=obj.Area(fvalue1);
	cout<<"Area of circle is::::"<<fret<<"\n";
	
	cout<<"Size of object is:"<<sizeof(obj)<<"\n";
}
	