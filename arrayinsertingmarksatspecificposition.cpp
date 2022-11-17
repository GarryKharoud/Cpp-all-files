#include<iostream>
using namespace std;
int main(){
	int a[11],b,c,d,e,f;
	for(b=0; b<=9; b++)
	{
		cout<<"Enter the marks of stusent"<<b+1<<" : ";
		cin>>a[b];
	}
	cout<<"\n Enter the student number whom marks you want to edit: ";
	cin>>c;
	e=c-1;
	cout<<"\n Enter the marks for student "<<c<<" : ";
	cin>>f;
	for(d=10; d>=e; d--)
	{
			a[d]=a[d-1];	
	}
	a[e]=f;
	cout<<endl;
	for(e=0; e<=10; e++)
	{
		cout<<" marks of student "<<e+1<<" : "<<a[e]<<endl;  
	}
	return 0;
}
