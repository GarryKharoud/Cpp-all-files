#include<iostream>
using namespace std;
main()
{
	int a[10],b,i,c=0;
	for(i=0;i<=9;i++)
	{
		cout<<"enter the marks of student"<<i+1<<" =";
		cin>>a[i];
	}
	for(i=0;i<=9;i++)
	{
		cout<<"marks of student "<<i+1<<" =";
		cout<<a[i];
		cout<<"\n";
	    if(a[i]%2==0)
	    {
	    	
		}
		else
	    {
	    	c=c+a[i];
		}
	
    }
    cout<<"total marks of students ="<<c;
}
