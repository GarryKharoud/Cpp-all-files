#include<iostream>
using namespace std;
main()
{
	int i,j,s=1,k;
	for(j=1;j<=5;j=j+1)
	{
		for(i=j;i>=1;i=i-1)
		{
			k=k+1;
			cout<<k;
		}
		cout<<"\n";
	}
}
