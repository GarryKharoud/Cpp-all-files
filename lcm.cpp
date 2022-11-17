#include<iostream>
using namespace std;
main()
{
	int a,b,i,c=1;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	i=2;
	while(i<=a || i<=b)
	{
		if(a%i==0 || b%i==0)
		{
			cout<<i;
			c=c*i;
			if(i>=a && i>=b)
			{
				cout<<" ";
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
	}
	
	cout<<c;
}
