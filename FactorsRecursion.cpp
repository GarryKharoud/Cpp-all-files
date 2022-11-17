#include<iostream>
using namespace std;
void add(int a,int b)
{
	if(a%b==0)
	{
		a=a/b;
		cout<<b;
		if(b<=a)
		{
			cout<<" * ";
		}
	}
	else
	{
		b=b+1;
	}
	add(a,b);
}
main()
{
	int a;
	cout<<"Enter The Number = ";
	cin>>a;
	add(a,2);
}
