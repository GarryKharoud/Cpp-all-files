#include<iostream>
using namespace std;
main()
{
	char a[50],k;
	int i,j;
	cout<<"Enter the string = ";
	gets(a);
	
	for(j=0;a[j]!='\0';j++);
	
		for(i=j;i>=0;i--)
	    	{
			    cout<<a[i];
			}
			k=a;
			if(k==a[i])
			{
				cout<<"yes";
			}
			else
			{
				cout<<"no";
			}
}
