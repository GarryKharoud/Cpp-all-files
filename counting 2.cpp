#include<iostream>
using namespace std;
main()
{
cout<<"enter the value of a=";
int a;
cin>>a;
cout<<"enter the value of b=";
int b;
cin>>b;
int i;
if(a<b)
{
	for(i=a;i<=b;i=i+1)
	{
		cout<<i;
	}
}
else
{
	for(i=a;i>=b;i=i-1)
	{
		cout<<i;
	}
}
}
