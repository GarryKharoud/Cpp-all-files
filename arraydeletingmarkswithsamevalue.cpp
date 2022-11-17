#include<iostream>
using namespace std;
int main(){
	int a[10],b,c,d,o;
	for(b=0; b<=9; b++)
	{
		cout<<"Enter the marks of student "<<b+1<<" : ";
		cin>>a[b];
	}
	cout<<"Enter the marks you want to delete: ";
	cin>>o;
	int e=0;
	for(b=0;b<=9-e;b++)
	{
		if(a[b]==o)
		{
			d=b;
			e=e+1;
			for(c=d; c<=9-e;c++)
			{
				a[c]=a[c+1];
			}
			b=b-1;
		}
	}
	for(c=0; c<=9-e; c++)
	{
		cout<<"Marks of student "<<c+1<<" = "<<a[c]<<endl;
	}
	return 0;
}
