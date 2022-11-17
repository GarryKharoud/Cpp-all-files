#include<iostream>
using namespace std;
main()
{
	int a[10],j,i;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks of student"<<i+1<<"=";
		cin>>a[i];
	}
	for(i=0;i<=9;i++)
	{
		cout<<"marks of student "<<i+1<<"=";
		cout<<a[i];
		cout<<"\n";
	}
	cout<<"the marks you want to enter j ";
	cin>>j;
	if(a[i]==j)
	{
		cout<<"the student with marks "<<j<<"are ="<<i+1;
	}
	
}
