#include<iostream>
using namespace std;
int main(){
	int a[10],b,c,d,e;
	for(b=0; b<=9; b++)
	{
		cout<<"Enter number "<<b+1<<" : ";
		cin>>a[b];
	}
	c=a[0];
	d=a[0];
	for(e=0; e<=9; e++)
	{
		if(c<a[e])
		{
			d=c;
			c=a[e];
		}
		else
		{
			if(d<a[e])
			{
				d=a[e];
			}
		}
	}
	cout<<d<<" is the second largest number ";
	return 0;
}
