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
		if(a[i]=='b'||a[i]=='c'||a[i]=='d'||a[i]=='e'||a[i]=='f'||a[i]=='g'||a[i]=='h'||a[i]=='j'||a[i]=='k'||a[i]=='l'||a[i]=='m'||a[i]=='n'||a[i]=='o'||a[i]=='p'||a[i]=='q'||a[i]=='r'||a[i]=='s'||a[i]=='t'||a[i]=='v'||a[i]=='w'||a[i]=='y'||a[i]=='z')
		{
			h=h+1;
		}
		else
		{
			
		}
		
	}
	cout<<"The number of times a is repeated ="<<j<<endl;
	cout<<"The number of times space is used ="<<k<<endl;
	cout<<"If the numbers are consonents ="<<h;
}
