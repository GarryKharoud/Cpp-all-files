#include<iostream>
using namespace std;
main()
{
	int a,c,i,d;
	d=1;
	while(d<=1000)


	{
		a=d;
		c=0;
		i=2;
		while(i<=a-1)
		{
			
			if(a%i==0)
			{
				c=1;
			}
			i++;
		}
	
		if(c==0)
		{
			cout<<"\n"<<d;
		}
		d++;
	}
 
}
