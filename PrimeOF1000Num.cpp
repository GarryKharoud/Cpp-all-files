#include<iostream>
using namespace std;
main()
{
	int a,b,c=0,d=0,e;
for(d=1;d<=1000;d++)
{
	a=d;
	c=0;
	for(;a>0;)
	{
		b=a%10;

		a=a/10;
		c=c+b*b*b;
	    
	}
	if(d==c)
	{
		cout<<"\n"<<d;
	}
	
}

}
