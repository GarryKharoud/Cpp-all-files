#include<iostream>
using namespace std;
int main(){
	int a[10],b,c,d,e,f,g;
	for(b=0; b<=9; b++)
	{
		cout<<"Enter the marks of student "<<b+1<<" : ";
		cin>>a[b];
	}
	f=0;
	for(c=0; c<=9-f; c++)
	{
		for(d=c+1; d<=9-f; d++)
		{
			if(a[c]==a[d])
			{
				f=f+1;
				for(e=d; e<=9-f; e++ )
				{
					a[e]=a[e+1];
				}
				d--;
			}
		}
	}
	for(g=0; g<=9-f; g++)
	{
		cout<<"marks of student "<<g+1<<" = "<<a[g]<<endl;
	}
	return 0;
}
