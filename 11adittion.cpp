#include<iostream>
using namespace std;
int main(){
	int a,b,c=0,d=0;
	cout<<"Enter your number: ";
	cin>>a;
	for(b=1; b<=a; b++)
	{
		c=c*10+1;
		cout<<c;
		if(b<a)
		{
			cout<<"+";
		}
		d=d+c;
	}
	cout<<"= "<<d;
	return 0;
}
