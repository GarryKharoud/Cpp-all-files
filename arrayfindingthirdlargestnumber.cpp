#include<iostream>
using namespace std;
int main(){
	int a[10],b,c,d,e,f;
	for(b=0; b<=9; b++)
	{
		cout<<"Enter the marks of student "<<b+1<<" : ";
		cin>>a[b];
	}
	c=a[0];
	d=a[0];
	e=a[0];
	for(f=0; f<=9; f++)
	{
		if(c<a[f])
		{
			e=d;
			d=c;
			c=a[f];
		}
		else
		{
			if(d<a[f])
			{
				e=d;
				d=a[f];
			}
			else
			{
				if(e<a[f])
				{
					e=a[f];
				}
			}
		}
	}
	cout<<endl<<endl<<e<<" is third largest number ";
	return 0;
}
