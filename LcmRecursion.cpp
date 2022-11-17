#include<iostream>
using namespace std;
int c=1;
int add(int a,int b,int i)
{
	if(i<=a || i<=b)
	{
		if(a%i==0 || b%i==0)
		{
			cout<<i;
			c=c*i;
			if(i>=a && i>=b)
			{
				cout<<" = ";
			}
			else
			{
				cout<<"*";
			}
			if(a%i==0)
			{
			 a=a/i;
		    }
		    if(b%i==0)
		    {
		    	b=b/i;
			}		
		}
		else
		{
			i=i+1;
		}
		add(a,b,i);
	}
	return c;
	
}
main()
{
	int x,y;
	cout<<"Enter Value OF a = ";
	cin>>x;
	cout<<"Enter Value OF b = ";
	cin>>y;
	int e=add(x,y,2);
	cout<<e;
}
