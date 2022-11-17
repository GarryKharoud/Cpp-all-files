#include<iostream>
using namespace std;
void add(int i)
{
	if(i>=1)
	{
		int b=i;
		b=i%2;
		i=i/2;
		add(i);
		cout<<b;
		
	}
}
main()
{
	int c;
	cout<<"Enter The Number = ";
	cin>> c;
	cout<<"Binary Value = ";
	add(c);
}
