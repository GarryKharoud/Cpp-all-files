#include<iostream>
using namespace std;
main()
{
	cout<<"the number a is =";
	int a;
	cin>>a;
	cout<<"the number b =";
	int b;
	cin>>b;
	cout<<"the number c=";
	int c;
	cin >>c;
	cout<<"the number d =";
	int d;
	cin>>d;
	if(a>b) 
	{
		if(a>c)
		{
			if(a>d)
			{
				cout<<"a is greter";
			}
			else
			{
				cout<<"d is greter";
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
				cout<<"c id greater";
			}
			else
			{
				cout<<"d is greater";
			}
		}

	}
}
