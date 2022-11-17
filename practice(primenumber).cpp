#include<iostream>
using namespace std;
main()

{
	int a,i,c=0;
	cout<<"the value of a=";
	cin>>a;
	{
		for(i=2;i<=a-1;i=i+1)
		{
			if(a%i==0)
			{
				c=1;
			}
		}
		if(c==0)
		{
			cout<<"true";
		}
		else
		{
			cout<<"false";
		}
	}
}


