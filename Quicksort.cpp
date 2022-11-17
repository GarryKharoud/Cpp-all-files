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
	swap(&a[i],&a[h]);
	return i;
}
void quicksort(int a[], int l, int h)
{
	if(l<h)
	{
		int pi = quicksort(a,l,h);
		quicksort(a,l,pi-1);
		quicksort(a,pi+1,h);
	}
}
void printarray(int arr[] , int size)
{
	int i;
	for(i=0;i<=size;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}
main()
{
	int a[6]={10,30,80,70,50,55}
	quicksort(a,0,5);
	printarray(a,5);
}
