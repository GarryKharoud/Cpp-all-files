#include<iostream>
using namespace std;
int main(){
	char a[50],b[50],e[50];
	int c,d;
	cout<<"String a: ";
	gets(a);
	cout<<"String b: ";
	gets(b);
	cout<<"string a+b: ";
	for(c=0; a[c]!='\0'; c++)
	{
	
	}
	for(d=0; b[d]!='\0'; d++)
	{
		a[c]=b[d];
		c++;
	}
	a[c]='\0';
	for(c=0; a[c]!='\0'; c++)
	{
		cout<<a[c];
	}
	return 0;
}
