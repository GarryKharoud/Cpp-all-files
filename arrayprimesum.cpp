#include<iostream>
using namespace std;
main()
{
	int arr[10]={1,3,5,323,23,54,23,34,12};
	int sum=0;
	for(int i=0;i<10;i++)
	{
		if(arr[i]/2==1)
		{
			sum=sum+arr[i];
			cout<<arr[i]<<endl;
		}
	}
	cout<<"Array Prime sum = "<<sum;
}
