#include<iostream>
using namespace std;
int main(){
	int a[10],b,c;
	for(b=0; b<=9; b++)
	{
		cout<<"Enter marks of student"<<b+1<<" : ";
		cin>>a[b];
	}
	cout<<"Enter which student you want to delete: ";
	cin>>c;
	c=c-1;
	for(;c<=8;c++)
	{
		a[c]=a[c+1];
	}
	for(c=0;c<=8;c++)
	{
		cout<<"Marks of student "<<c+1<<" = "<<a[c]<<endl;
	}
	return 0;
}
