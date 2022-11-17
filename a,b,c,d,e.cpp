#include<iostream>
using namespace std;
main()
{
	int a,b,c,d=0,e;
	cin>>a;
	c=a%10;
	for(;a>0;)
	{
		b=a%10;
		cout<<b;
		d=d+b;
		a=a/10;
		
	}
	c=c+b;
	cout<<"\n";
	e=d-c;
	cout<<c;
	cout<<"\n";
	cout<<d;
	cout<<"\n";
	cout<<e;
	cout<<"\n";
}

