#include<iostream>
using namespace std;
void swap(int* a, int* b) 
{ 
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int a[],int l,int h)
{
	int i,j;
	int pivot=a[h];
	i=l;
	for(j=l;j<h;j++)
	{
		if(a[j]<pivot)
		{
			swap(&a[i] , &a[j]);
			i++;
		}
		
	}
	swap(&a[i] , &a[h]);
	return i;
}
void quicksort(int a[],int l,int h)
{
	if(l<h)
	{
		int pi=partition(a,l,h);
		quicksort(a,l,pi-1);
		quicksort(a,pi+1,h);
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
	int a[7]={10,50,85,30,90,35,70};
	cout<<"Before Sort "<<endl;
	printarray(a,6);
	quicksort(a,0,6);
	cout<<"After Sort"<<endl;
	printarray(a,6);
}
