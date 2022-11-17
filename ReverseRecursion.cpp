#include<iostream>
using namespace std;
void add(int i)
{
	if(i>0)
	{
		int b;
		b=i%10;
		cout<<b;
		i=i/10;
		add(i);
	}
}
main()
{
	int a;
	cout<<"Enter The Value = ";
	cin>>a;
	cout<<"Number After Reversing = ";
	add(a);
}
