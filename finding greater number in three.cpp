#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	cout<<"Enter 3rd number: ";
	cin>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<a<<" is greater";
		}
		else
		{
			cout<<c<<" is greater";
		}
	}
	else
	{
		if(b>c)
		{
			cout<<b<<" is greater";
		}
		else
		{
			cout<<c<<" is greater";
		}
	}
	return 0;
}