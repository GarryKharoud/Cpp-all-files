#include<iostream>
using namespace std;
main()
{
	int a[10],i,j=0;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks "<<i+1<<" =";
		cin>>a[i];
	}
	for(i=0;i<=9;i++)
	{
		j=j+a[i];
	}
	for(i=0;i<=9;i++)
	{
		cout<<"Marks of student "<<i+1<<" =";
		cout<<a[i];
		cout<<endl;
	}
	cout<<"Sum of marks ="<<j;
}
