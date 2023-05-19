#include<iostream>
using namespace std;

int SumI(int Arr[],int iSize)
{
	/*
	for(i=0;i<iSize;i++)
	{
		iSum=iSum+Arr[i];
	}
	*/
	
	int iSum=0,i=0;
	while(i<iSize)
	{
		iSum=iSum+Arr[i];
		i++;
	}
	return iSum;
}

//RECURSTION FUNCTION//

int SumR(int Arr[],int iSize)
{
	static int iSum=0,i=0;
	/*
	for(i=0;i<iSize;i++)
	{
		iSum=iSum+Arr[i];
	}
	*/
	if(i<iSize)
	{
		iSum=iSum+Arr[i];
		i++;
		SumR(Arr,iSize);
	}
	return iSum;
}
	
int main()
{
	int iLength=0,i=0,iRet=0;
	int *p=NULL;
	
	cout<<"Enter numbers of elements\n";
	cin>>iLength;
	
	p=new int[iLength];
	
	cout<<"Enter the elements\n";
	
	for(i=0;i<iLength;i++)
	{
		cin>>p[i];
	}
	
	//iRet=SumI(p,iLength);
	iRet=SumR(p,iLength);
	cout<<"Addition is:"<<iRet<<"\n";
	delete []p;
	
	return 0;
}