#include<iostream>
using namespace std;
void add(int i,int c)
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
		add(i-1,c);
	}
	else
	{
	
		cout<<c;
	}
}
main()
{
	int a;
	cout<<"a=";
	cin>>a;	
	add(a,1);
}
