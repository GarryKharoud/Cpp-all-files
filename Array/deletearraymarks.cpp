#include<iostream>
using namespace std;
main()
{
	int a[10],i,j,c,d;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks of student "<<i+1<<"=";
		cin>>a[i];
	}
	cout<<"Enter the value you want to delete =";
	cin>>j;
	for(i=0;i<=8;i++)
	{
		if(a[i]==j)
		{
			c=i;
		}
	}
	for(i=c;i<=8;i++)
	{	
		a[i]=a[i+1];
	  
		       for(i=0;i<=8;i++)
		       {
	   		       cout<<"marks of student "<<i+1<<" ="<<a[i];	   
			       cout<<"\n";
		       }
	}
}
