#include<iostream>
using namespace std;
int b;
 add(int i)
{
	int k;
	if(i>=1)
	{
		
		cout<<i<<"  ";
		add(i-1);
	}
	else
	{
		b=add(i);
		b=b*i;
		return b;
	}
}
main()
{
	int a;
	cout<<"Enter The Value OF a = ";
	cin>>a;
	add(a);	
}
