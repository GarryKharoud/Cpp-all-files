#include<iostream>
using namespace std;
main()
{
	int i,j;
	for(j=5;j>=1;j=j-1)
	{
		for(i=5;i>=j;i=i-1)
		{
			cout<<i;
		}
		cout<<"\n";
	}
}
