#include<iostream>
using namespace std;
main()
{
	int a,b,c=0;
	cin>>a;
	if(a==153)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"false";
	}
	
	for(;a>0;)
	{
		b=a%10;
		cout<<b;
		a=a/10;
		c=c+b*b*b;
		
	}
	cout<<c;
	cout<<"\n";
}
