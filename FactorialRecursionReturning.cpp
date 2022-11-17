#include<iostream>
using namespace std;
int c=1;
int add(int i)
{
		if(i>=1)
		{
			c=c*i;
			cout<<i;
			if(i>1)
			{
				cout<<" * ";
			}
			else
			{
				cout<<" = ";
			}
			add(i-1);
		}
		return c;
}
main()
{
	int a;
	cout<<"Enter a Number = ";
	cin>>a;
	int b=add(a);
	cout<<b;
}
