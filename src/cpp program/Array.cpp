#include<iostream>
using namespace std;

class Array
{
	private:
	int *ptr;
	int size;
	
	public:
	Array(int no=5)
	{
		cout<<"Constructor\n";
		size=no;
		ptr=new int[size];
	}
	~Array()
	{
		cout<<"Destructor\n";
		delete[]ptr;
	}
	
	void Accept()
	{
		int icnt=0;
		cout<<"Enter the element\n";
		
		for(icnt=0;icnt<size;icnt++)
		{
			cin>>ptr[icnt];
		}
	}
	void Display()
	{
		cout<<"element are\n";
		int icnt=0;
		for(icnt=0;icnt<size;icnt++)
		{
			cout<<"Array->"<<ptr[icnt]<<"\n";
		}
	}
};
		

	
int main()
{
	cout<<"inside main\n";
	Array *obj=NULL;
	obj=new Array(4);
	obj->Accept();
	obj->Display();
	delete obj;
	return 0;
}