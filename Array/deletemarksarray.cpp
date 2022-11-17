#include<iostream>
using namespace std;
main()
{
	int a[10],i,c,j;
	for(i=0;i<=9;i++)
	{
		cout<<"enter the marks "<<i+1<<" =";
		cin>>a[i];
	}
	cout<<"enter the marks you want to delete j = ";
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
	}
	  for(i=0;i<=8;i++)
	  {
	       cout<<"marks of student "<<i+1<<" ="<<a[i];
	       cout<<"\n";
	  }
    
}
