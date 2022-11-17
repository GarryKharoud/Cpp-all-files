#include<iostream>
using namespace std;
main()
{
	int b=0,c=0;
	int arr[]={2,3,4,5,6};
	int i;
	for(i=0;i<arr.length;i++)
	{
		b=arr[i];
		c=b+c;
	}
	cout<<c;
}
