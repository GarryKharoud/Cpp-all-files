#include<iostream>
using namespace std;
main()
{
	int a,b,c,i;
	cout<<"enter the value of a=";
	cin>>a;
	cout<<"enter the value of b=";
	cin>>b;
	cout<<"press 1 for add";
	cout<<"\n";
	cout<<"press 2 for subtract";
	cout<<"\n";
	cout<<"press 3 for multiply";
	cout<<"\n";
	cout<<"press 4 for divide";
	cout<<"\n";
	cin>>i;
	switch(i)
	{
		case 1: c=a+b;
		cout<<c;
		break;
		case 2:
		 c=a-b;
		cout<<c;
		break;
		case 3: c=a*b;
		cout<<c;
		break;
		case 4: c=a/b;
		cout<<c;
	}
}
