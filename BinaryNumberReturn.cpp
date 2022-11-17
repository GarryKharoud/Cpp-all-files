#include<iostream>
using namespace std;
int add(int i)
{
	if(i>1)
	{
		int b=i;
		b=i%2;
		i=i/2;
		int k=add(i);
		b=k*10+b;
		return b;
	}
	else
	{
		return 1;
	}
}
main()
{
	int c;
	cout<<"Enter The Number = ";
	cin>> c;
	cout<<"Binary Value = ";
	int j=add(c);
	cout<<j;
}
