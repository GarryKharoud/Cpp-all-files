#include<iostream>
using namespace std;
main()
{
	int a;
	a=10;
	int *j;
	cout<<&a;
	j=&a;
	cout<<endl;
	cout<<&j;
	cout<<endl;
	cout<<*j;
	*j=20;
	cout<<endl;
	cout<<a;
}
