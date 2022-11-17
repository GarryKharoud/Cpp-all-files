#include<iostream>
using namespace std;
main()
{
	int a[10],k,i,c,j,h;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks of student"<<i+1<<" =";
		cin>>a[i];
	}
	cout<<"Enter the marks you want to delete =";
	cin>>k;
	int f;
	f=0;
	for(i=0;i<=9-f;i++)
	{
		if(a[i]==k)
		{
			c=i;
			f=f+1;
			for(h=c;h<=9-f;h++)
			{
				a[h]=a[h+1];
			}
			i=i-1;
		}
	}
	for(i=0;i<=9-f;i++)
	{
		cout<<"Marks of student "<<i+1<<" ="<<a[i];
		cout<<"\n";
	}
}
