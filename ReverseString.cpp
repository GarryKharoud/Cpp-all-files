#include<iostream>
using namespace std;
main()
{
	char a[50];
	int i,j,h;
	cout<<"Enter the string = ";
	gets(a);
	for(j=0;a[j]!='\0';j++);
	
	for(i=j;i>=0;i--)
   	{
	    cout<<a[i];
	    if(a[i]==a[j])
	    {
	    	h=1;
		}
	}
	if(h==0;)
	{
		cout<<" YES ";		
	}
	else
	{
		cout<<" NO ";
	}
}
