#include<iostream>
using namespace std;
int main(){
	int a[10],b,c,d,e,f;
	for(b=0; b<=9; b++)
	{
		cout<<"Enter number "<<b+1<<" : ";
		cin>>a[b];
	}
	for(f=0; f<=9; f++)
	{
		for(c=0; c<=8; c++)
		{
			if(a[c]>a[c+1])
			{
				d=a[c+1];
				a[c+1]=a[c];
				a[c]=d;
			}
		}
	}
	cout<<endl<<endl<<a[c]<<" is largest number";
	return 0;
}
