#include<iostream>
using namespace std;
main()
{
	int a,c,i,d;
	for(d=1;d<=1000;d++)
	

	{
		a=d;
		c=0;
		for(i=2;i<=a-1;i++)
		{
			if(a%i==0)
			{
				c=1;
			}
		}
	
		if(c==0)
		{
			cout<<"\n"<<d;
		}
	}
 
}
