#include<iostream>
using namespace std;
int main(){
	int a[10],b,c,d,e=0;
	for(b=0; b<=9; b++)
	{
		cout<<"Enter marks of student "<<b+1<<" : ";
		cin>>a[b];
	}
	cout<<endl<<endl<<"Enter the marks you want to search: ";
	cin>>c;
	for(d=0; d<=9; d++)
	{
		if(c==a[d])
		{
			e=e+1;
		}
	}
	cout<<e<<" students have scored "<<c<<" marks";
	return 0;
}
