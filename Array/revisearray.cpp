#include<iostream>
using namespace std;
main()
{
	int a[10],i,j,c,n;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks of student "<<i+1<<" =";
		cin>>a[i];
	}
	cout<<"Enter the marks you want to delete = ";
	cin>>j;
	int k;
	k=0;
	for(i=0;i<=9-k;i++)
	{
		if(a[i]==j)
		{
			c=i;
			k=k+1;
			for(n=c;n<=9-k;n++)
			{
			    a[n]=a[n+1];
			}
		    i=i-1;
		}
	}
	for(i=0;i<=9-k;i++)
	{
		cout<<"Marks of student "<<i+1<<" ="<<a[i];
		cout<<endl;
	}
}
