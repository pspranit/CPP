#include<iostream>
using namespace std;

typedef unsigned int UNIT;

UNIT ToggleRange(UNIT iNo,int iStart,int iEnd)
{
	UNIT iMask=0;
	UNIT iResult=0;
	
	return(iNo^((0xFFFFFFFF<<(iStart -1))) & ((0xFFFFFFFF>>(32-iEnd))));
}

int main()
{
	UNIT iValue=0,iRet=0,i=0,j=0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	cout<<"Enter Starting position\n";
	cin>>i;
	
	cout<<"Enter Ending position\n";
	cin>>j;

	iRet=ToggleRange(iValue,i,j);
	
	cout<<"Updated number is:"<<iRet<<"\n";
	
	return 0;
}