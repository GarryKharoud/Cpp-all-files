#include<iostream>
using namespace std;
main()
{
	int a[10],d,j=0,c,h,i;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks of student "<<i+1<<" =";
		cin>>a[i];
	}
	cout<<"Enter the marks you want to delete =";
	cin>>j;
	int v;
	v=0;
	for(i=0;i<=9-v;i++)
	{
		if(a[i]==j)
		{
			c=i;
			v=v+1;
			for(h=c;h<=9-v;h++)
			{
				a[h]=a[h+1];
			}
			i=i-1;
		}
	}
	for(i=0;i<=9-v;i++)
	{
		cout<<"Marks of student "<<i+1<<" =";
		cout<<a[i]<<endl;
	}
}
