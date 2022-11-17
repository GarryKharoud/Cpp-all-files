#include<iostream>
using namespace std;
main()
{
	int a[10],i,c,e,j;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks "<<i+1<<" =";
		cin>>a[i];
	}
	cout<<"Enter the marks you want to delete = ";
	cin>>e;
int f=0;
	for(i=0;i<=9-f;i++)
	{
		if(a[i]==e)
		{
			c=i;
			f=f+1;
			for(j=c;j<=9-f;j++)
	        {
             	a[j]=a[j+1];
            }
            i=i-1;
		}
	}
	
		   for(i=0;i<=9-f;i++)
			   {
				   cout<<"marks of student "<<i+1<<" ="<<a[i];
				   cout<<"\n";
			   }
		
}
