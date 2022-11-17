#include<iostream>
using namespace std;
main()
{
	int a,b,c,i;
	a=0;
	b=1;
	for(i=1;i<=10;i++)
	{
		cout<<a<<" ";
		c=a+b;
		a=b;
		b=c;
	}
}
