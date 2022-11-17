#include<iostream>
using namespace std;
void Add(int *j,int *k,int *l)
{
	*j=*j+5;
	*k=*k+5;
	*l=*l+5;
}
main()
{
	int a,b,c;
	cout<<"Enter Value Of a = ";
	cin>>a;
	cout<<"Enter Value Of b = ";
	cin>>b;
	cout<<"Enter Value Of c = ";
	cin>>c;
	Add(&a,&b,&c);
	cout<<"Value of a After Addition = "<<a<<endl;
	cout<<"Value of b After Addition = "<<b<<endl;
	cout<<"Value of c After Addition = "<<c;
}
