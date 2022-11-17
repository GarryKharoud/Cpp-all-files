#include<iostream>
using namespace std;
main()
{
	cout<<"the number is a";
	int a;
	cin>>a;
	cout<<"the number is b";
	int b;
	cin>>b;
	if(a>b)
	{
	
		cout<<"a is greater";
	}
	else
	{
		if(b>a)
		{
			cout<<"b is greater";
		}
		else
		{
			cout<<"both are equal";
		}
	}
}
