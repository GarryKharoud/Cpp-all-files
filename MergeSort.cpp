#include<iostream>
using namespace std;
void merge(int arr[],int f,int h,int m)
{
	int i,k,j;
	int n1=m-f+1;
	int n2=h-m;
	int l[n1],r[n2];
	for(i=0;i<n1;i++)
	{
		l[i]=arr[i+f];	
	}
	for(i=0;i<n2;i++)
	{
		r[i]=arr[i+m+1];
	}
	while(i<n1 && i<n2)
	{
		if(l[i]>r[i])
		{
			arr[k]=r[i];
			j++;
			k++;
		}
		else
		{
			arr[k]=l[i];
			i++;
			k++;
		}
	}
	while(i<n1)
	{
		arr[k]=l[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=r[j];
		j++;
		k++;
	}
}
void mergesort(int arr[],int l,int h)
{
	if(l<h)
	{
		int mid=(l+h)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,h);
		merge(arr,l,mid,h);
	}
}
void printarray(int a[],int h)
{
	int i;
	for(i=0;i<=h;i++)
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl;
}
main()
{
	int a[8]={11,30,24,7,31,16,39,41};
	cout<<"Before MergeSort "<<endl;
	printarray(a,7);
	mergesort(a,0,7);
	cout<<"After MergeSort "<<endl;
	printarray(a,7);
}
