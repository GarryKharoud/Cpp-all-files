
#include<iostream>
using namespace std;
main()
{
	cout<<"enter the marks a=";
	int a;
	cin>>a;
	if(a<=100)
	{
		if(a>=90)
		{
		cout<<"outstanding";
	}
	else
	{
		if(a>=80)
		{
			cout<<"excellent";
		}
		else
		{
			if(a>=70)
			{
				cout<<"good";
			}
			else
			{
				if(a>60)
				{
				cout<<"fair";
				}
				else
				{
					cout<<"fail";
				}
				}
			}
		}
	}
	}
