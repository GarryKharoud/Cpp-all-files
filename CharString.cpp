#include<iostream>
using namespace std;
main()
{
	char a[50];
	int i,j;
	cout<<"Enter a string = ";
	gets(a);
	j=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a')
		{
			j=j+1;
		}
	}
	cout<<"The number of times a is repeated ="<<j;
}
