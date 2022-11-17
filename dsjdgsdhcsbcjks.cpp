#include<iostream>
using namespace std;
main()
{
	int i,j;
	int k=0,h=0;
	for(j=3;j<=12;j++)
	{
	 	for(i=3;i<=15;i++)
		{
			j=h+j;
			h++;
			k++;
			cout<<i;
		}
		cout<<endl;
	}
}
