#include<iostream>
using namespace std;
main()
{
	int i,j,s=0;
	for(j=5;j>=1;j=j-1)
	{
		for(i=5;i>=s;i=i-1)
	    {
	    	cout<<" ";
		}
	    for(i=j;i<=5;i=i+1)
	
		{
			cout<<i;
		}
		for(i=5-1;i>=j;i=i-1)
		{
			cout<<i;
		}
		s=s+1;
		cout<<"\n";
	}
}
