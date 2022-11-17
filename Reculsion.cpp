#include<iostream>
using namespace std;
void add(int i)
{
	if(i<=5)
	{
		cout<<i;
		add(i+1);
	}
}
main()
{
	add(1);
}

