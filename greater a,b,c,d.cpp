#include<iostream>
using namespace std;
main()
{
	cout<<"enter the value of a=";
	int a;
	cin>>a;
	cout<<"enter the value of b=";
	int b;
	cin>>b;
	cout<<"enter the value of c=";
	int c;
	cin>>c;
	cout<<"enter the value of d=";
	int d;
	cin>>d;
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				cout<<"a is greater";
			}
			else
			{
				cout<<"d is greater";
			}
		}
		else
		{
			if(c>d)
			{
				cout<<"c is greater";
			}
			else
			{
				cout<<"d is greater";
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				cout<<"b is greater";
			}
			else
			{
				cout<<"d is greater";
			}
		}
		else
		{
			if(c>d)
			{
				cout<<"c is greater";
			}
			else
			{
				cout<<"d is greater";
			}
		
		}
	}
	

}
