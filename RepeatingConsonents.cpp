#include<iostream>
using namespace std;
main()
{
	char a[50],j;
	int h,i;
	cout<<"Enter a string = ";
	gets(a);
	j=0;
	for(i=0;a[i]!='\0';i++)
	{
		for(j='a';j<='z';j++)
		{
			if(a[i]==j)
			{
			    h=h+1;
			}
		}
	}
	cout<<"If the numbers are consonents ="<<h;
}
