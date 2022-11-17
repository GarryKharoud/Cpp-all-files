#include<iostream>
using namespace std;
main()
{
	int a[10],i,j;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks of student "<<i+1<<" =";
	    cin>>a[i];
	}
	for(i=0;i<=9;i++)
	{
		if(a[0]<a[i])
		{
			j=a[i];
			a[0]=a[i];
		}
		else
		{
			if(a[0]<a[i])
			{
				a[0]=a[i];
			}
		}
	}
	cout<<"The Largest Number = "<<j<<endl;
	cout<<"The Second Largest Number = "<<a[0];
}
