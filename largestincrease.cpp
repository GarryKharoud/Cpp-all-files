#include<iostream>
using namespace std;
void Add(int *j,int *k,int *l)
{
	int x,y,z;
	if(*j>*k)
	{
		x=*j;
		y=*k;	
	}
	else
	{
		x=*k;
		y=*j;	
	}
	if(*l>x)
	{
		z=y;
		y=x;
		x=*j;
	}
	else
	
		if(*l>y)
		{
			z=y;
			y=*l;
		}
	
	else
	{
		z=*l;
	}
	*j=x;
	*k=y;
	*l=z;
}
main()
{
	int a,b,c;
	cout<<"Enter Value Of a = ";
	cin>>a;
	cout<<"Enter Value Of b = ";
	cin>>b;
	cout<<"Enter Value Of c = ";
	cin>>c;
	Add(&a,&b,&c);
	cout<<"vakue of Largest = "<<a<<endl;
	cout<<"Value of Second Largest = "<<b<<endl;
	cout<<"Value of Third Largest = "<<c;
}
