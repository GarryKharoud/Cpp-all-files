#include<iostream>
using namespace std;
int main(){
	char a[50],b[50],d;
	int c;
	cout<<"Enter your string: ";
	gets(a);
	cout<<"string 1: ";
	for(c=0; a[c]!='\0'; c++)
	{
		cout<<a[c];
	}
	cout<<"\nstring 2: ";
	for(c=0; a[c]!='\0'; c++)
	{
		b[c]=a[c];
	}
	b[c]='\0';
	cout<<b;
	return 0;
}
