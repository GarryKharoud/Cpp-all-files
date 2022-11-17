#include<iostream>
using namespace std;
main()
{
	int a[10],i,j,c,k,d,h;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks of student "<<i+1<<" =";
		cin>>a[i];
	}
	cout<<"Enter the marks you want to delete = "<<endl;
	int g;
	g=0;
	for(d=0;d<=9-g;d++)
	{
	
	  for(h=d+1;h<=9-g;h++)
	  {
		if(a[d]==a[h])
		{
			c=h;
			g=g+1;
			for(k=c;k<=9-g;k++)
			{
				a[k]=a[k+1];
			}
			h=h-1;
		}
	  }
    }
	for(i=0;i<=9-g;i++)
	{
		cout<<"Marks of student "<<i+1<<" ="<<a[i]<<endl;
	}
}
