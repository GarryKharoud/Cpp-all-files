#include<iostream>
using namespace std;
main()
{
	int a[10],i,h,j,g;
	for(i=0;i<=9;i++)
	{
		cout<<"Enter the marks of student "<<i+1<<" =";
		cin>>a[i];
	}
	
	for(i=0;i<=9;i++)
	{
	     if(a[0]<a[i])
	     {
	     	h=g;
	     	g=a[0];
	     	a[0]=a[i];
	     	
		 }
		 else
		 {
		 	if(h<a[i])
		 	{
		 		g=h;
		 		h=a[i];
			}
			else
			{
		        if(g<a[i])
	            {
	     	        g=a[i];
	     	    
		        }
			}
		 }
	}
	cout<<"Second Largest number is ="<<h<<endl;
	cout<<"largest number is ="<<a[0]<<endl;
	cout<<"Third largest number is ="<<g<<endl;
}
