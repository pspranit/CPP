#include<iostream>
using namespace std;

typedef unsigned int UNIT;

UNIT ToggleRange(UNIT iNo,int iStart,int iEnd)
{
	UNIT iMask1=0xFFFFFFFF,iMask2=0xFFFFFFFF,iMask=0;
	UNIT iResult=0;
	
	iMask1=iMask1<<(Start-1);
	iMask2=iMask2>>(32-iEnd);
	
	iMask=Mask1 & iMask2;
	
	iResult=iNo | iMask;
	return iResult;
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