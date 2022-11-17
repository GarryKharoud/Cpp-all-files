#include<iostream>
using namespace std;
void add(int i)
{
	if(i<=5)
	{
		add(i+1);
		cout<<i;
	}
}
main()
{
	add(1);
}

