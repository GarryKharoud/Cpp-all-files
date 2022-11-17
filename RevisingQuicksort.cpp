#include<iostream>
using namespace std;
void swap(int* a,int* b)
{
	 int t = *a; 
    *a = *b; 
    *b = t; 
}
int partition(int a[],int l,int h)
{
	int i,j;
	i=l;
	for(j=l;j<h;j++)
	{
		if(a[j]<a[h])
		{
			swap(&a[i],&a[j]);
			i++;
		}
	}
	swap(& a[i],& a[j]);
	return i;
}
void quicksort(int a[],int l,int h)
{
	if(l<h)
	{
		int k=partition(a,l,h);
		partition(a,l,k-1);
		partition(a,k+1,h);
	}
}
void Printarray(int a[],int size)
{
	for(int i=0;i<=size;i++)
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl;
}
main()
{
	int a[7]={10,50,80,20,90,35,70};
	quicksort(a,0,6);
	Printarray(a,6);
}
