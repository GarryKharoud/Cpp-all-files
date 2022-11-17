#include<iostream>
using namespace std;
void add(int i,int )
{
	int c,a;
	cout<<"a=";
	cin>>a;
	for(i=1;i<=a;i=i+1)
	{
		c=c*i;
		{
		cout<<i;
			{
				if(i<a)
				{
					cout<<" * ";
				}
				else
				{
					cout<<" = ";
				}
			}
		}
		
	}
	//add()
	cout<<c;
}
main()
{
	int a;
	cout<<"Enter The Number = ";
	cin>>a;
	add(a,1);
}
