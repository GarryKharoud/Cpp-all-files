#include<iostream>
using namespace std;
main()
{
	int a[10],i,c,k,e;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks of student "<<i+1<<" =";
		cin>>a[i];
	}
	cout<<"Enter the marks you want to delete = ";
	cin>>k;
	int s;
	s=0;
	for(i=0;i<=9-s;i++)
	{
		if(a[i]==k)
		{
			c=i;
			s=s+1;
			for(e=c;e<=9-s;e++)
			{
				a[e]=a[e+1];
			}
			i=i+1;
		}
	}
	for(i=0;i<=9-s;i++)
	{
		cout<<"Marks of student "<<i+1<<" ="<<a[i];
		cout<<endl;
	}
}
