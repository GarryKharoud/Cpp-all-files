#include<iostream>
using namespace std;
main()
{
	int i,j,s=1;
	for(j=1;j<=5;j=j+1)
	{
		for(i=1;i<=j;i=i+1)
		{
			cout<<s;
			s=s+1;
		}
		cout<<"\n";
	}
}

