#include<iostream>
using namespace std;
main()
{
	int a;
	int b=1;
	cout<<"Enter the number = ";
	cin>>a;
	cout<<"The factorial is = ";
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			cout<<i;
			b=b*i;
			if(i!=a)
			{
				cout<<"*";
			}
			
		}
	}
	cout<<endl;
	cout<<"The Product of factors is = "<<b;
}
