#include<stdio.h>

int main()
{
	int no=11;
	int *p=&no;
	printf("%d",&no);	
	printf("%d",*p);
	printf("%d",sizeof(p));
	
	return 0;
}