#include<iostream>
using namespace std;
main()
{
	int a[10],i,j;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks of student "<<i+1<<" = ";
		cin>>a[i];
	}
	for(i=0;i<=9;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	cout<<"Largest number = "<<a[0];
}
