#include<iostream>
using namespace std;
main()
{
	int a,i;
	cout<<a;
	cin>>a;
	for(i=2;a>i;)
	{
		if(a%i==0)
		{
			cout<<i;
			a=a/i;
			if(a==1)
			{
				
			}
			else
			{
				cout<<"*";
			}
		}
		else
		i=i+1;
	}
}
