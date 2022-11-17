#include<iostream>
using namespace std;
main()
{
	int a[10],d,j=0,c,i;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks of student "<<i+1<<" =";
		cin>>a[i];
	}
	cout<<"Enter the marks you want to delete =";
	cin>>j;
	for(i=0;i<=9;i++)
	{
		if(a[i]==j)
		{
			
		}
		else
		{
			cout<<"Marks of student "<<i+1<<" =";
			cout<<a[i]<<endl;
		}
	}
}
