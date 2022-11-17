#include<iostream>
using namespace std;
int largest(int a[],int z)
{
	int i,l;
	l=a[0];
	for(i=0;i<=z;i++)
	{
		if(l<a[i])
		{
			l=a[i];
		}
	}
	
	
	return l;
}
void countsort(int a[],int l,int exp)
{
	int output[l];
	int count[10]={0};
	for(int i=0;i<=l;i++)
	{
		count[(a[i]/exp)%10]++;
	}
	for(int i=1;i<10;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(int i=l;i>=0;i--)
	{
		output[count[a[i]/exp%10]-1]=a[i];
		count[(a[i]/exp)%10]--;
	}
	for(int i=0;i<=l;i++)
	{
		a[i]=output[i];
	}
}
void radixsort(int a[],int size)
{
	int l=largest(a,7);
	for(int i=1;l/i>0;i=i*10)
	{
		countsort(a,7,i);
	}
}
void printarray(int a[],int size)
{
	for(int i=0;i<=size;i++)
	{
		cout<<a[i]<<"   ";
	}
	cout<<endl;
}
main()
{
	int a[8]={170,45,75,90,802,24,2,66};
	cout<<"Before Sorting = ";
	printarray(a,7);
	cout<<"After Sort = ";
	radixsort(a,7);
	printarray(a,7);
}
