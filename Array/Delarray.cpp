#include<iostream>
using namespace std;
main()
{
	int a[10],i,j,h;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks of student"<<i+1<<"=";
		cin>>a[i];
	}
	cout<<"The marks you want to delete =";
	cin>>j;
	a[i+1]=h;
j--;
		for(i=j;i<=8;i++)
		{
			a[i]=a[i+1];
		}
			for(i=0;i<=8;i++)
	{
		cout<<"Marks of student"<<i+1<<"=";

		cout<<a[i];
		cout<<"\n";
	}
}
