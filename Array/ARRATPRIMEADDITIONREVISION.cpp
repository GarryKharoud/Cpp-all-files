#include<iostream>
using namespace std;
main()
{
	int a[10],i,c,d,j;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the name of students "<<i+1<<" =";
		cin>>a[i];
	}
	for(i=0;i<=9;i++)
	{
		cout<<"Marks of student "<<i+1<<" =";
		cout<<a[i];
		cout<<endl;
		d=0;
	for(c=2;c<=a[i]-1;c++)
	{
		if(a[i]%c==0)
		{
		    d=1;
		}
	}
	if(d==0)
	{
		j=j+a[i];
	}
	}
	cout<<"Sum of marks of students that are prime ="<<j;
}
