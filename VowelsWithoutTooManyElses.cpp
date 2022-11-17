#include<iostream>
using namespace std;
main()
{
	char a[50];
	int i,h,j,k;
	cout<<"Enter a string = ";
	gets(a);
	j=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			j=j+1;
		}
	}
	h=0;
	k=0;
	for(i=0;i<=a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			k=k+1;
		}
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]==' ')
		{
			
		}
		else
		{
			h=h+1;
		}
		
	}
	cout<<"The number of times a is repeated ="<<j<<endl;
	cout<<"The number of times space is used ="<<k<<endl;
	cout<<"If the numbers are consonents ="<<h;
}
