#include<iostream>
using namespace std;
int main(){
	int a=0,b=1,c;
	for(c=0; c<=21;)
	{
		c=a+b;
		cout<<c;
		a=b;
		b=c;		
	}
	return 0;
}
