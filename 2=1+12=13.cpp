#include<iostream>
using namespace std;
main()
{
	int a,i,c=0,d=0;
	cout<<"a=";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		c=c*10+i;
		
			cout<<c;
		if(i==a)
		{
			
		}
		else
		{
			cout<<"+";
		}
		
		d=d+c;
	
	}
	cout<<"\n";
	cout<<d;
}
