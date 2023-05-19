#include<iostream>
using namespace std;

typedef unsigned int UNIT;

UNIT ToggleNibble(UNIT iNo)
{
	UNIT iMask=0xF000000F;
	UNIT iResult=0;
	
	iResult=iNo^iMask;
	return iResult;
}

int main()
{
	UNIT iValue=0,iRet=0;
	
	cout<<"Enter number\n";
	cin>>iValue;

	iRet=ToggleNibble(iValue);
	
	//printf("%u",iRet);
	cout<<"Updated number is:"<<iRet<<"\n";
	
	return 0;
}