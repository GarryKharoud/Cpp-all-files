#include<iostream>
using namespace std;
int main(){
	int a[10],b,c,d,e,f,g,h;
	for(b=0; b<=9; b++)
	{
		cout<<"Enter the marks of student "<<b+1<<" : ";cin>>a[b];
	}
	cout<<"\n Enter the student number for whom you want to edit :";
	cin>>c;
	d=c-1;
	cout<<"\n Enter the marks of student "<<c<<" : ";
	cin>>e;
	for(f=d; f<=10; f++)
	{
		g=a[f];
		a[f]=e;
		e=g;
	}
	cout<<endl;
	for(g=0; g<=10; g++)
	{
		cout<<"marks of student "<<g+1<<" : "<<a[g]<<endl;
	}
	return 0;
}
