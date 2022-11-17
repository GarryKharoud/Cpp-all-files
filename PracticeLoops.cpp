#include<iostream>
using namespace std;
main()
{
	int i,j;
	int k=0;
	for(i=1;i<=15;i++)
	{
		for(j=1;j<=12;j++)
		{
			j=j+2;
			cout<<i;
			i++;
		}
		cout<<endl;
	}
}
