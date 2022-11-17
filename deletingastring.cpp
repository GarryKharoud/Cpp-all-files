#include<iostream>
using namespace std;
int main(){
	char a[50],e;
	int b,c,d,f;
	cout<<"Enter a string: ";
	gets(a);
	cout<<"Enter the alphabet you want to delete: ";
	cin>>e;
	for(b=0; a[b]!='\0'; b++)
	{
		if(a[b]==e)
		{
			d=b;			
			for(f=d; a[f]!='\0'; f++)
			{
				a[f]=a[f+1];
			}
			b=b-1;
		}
	}
	for(c=0; a[c]!='\0'; c++)
	{
		cout<<a[c];
	}
	return 0;
}
