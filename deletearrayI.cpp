#include<iostream>
using namespace std;
main()
{
	int a[10],i,j;
	for(i=0;i<=9;i++)
	{
		cout<<"enter the marks "<<i+1<<"=";
		cin>>a[i];
	}
	cout<<"enter marks you want to delete j =";
	cin>>j;
    for(i=0;i<=9;i++)
    {
    	if(a[i]==j)
    	{
    		
		}
    	else
    	{
    		cout<<"Maeks scored by student "<<i+1<<"="<<a[i]<<endl;
		}
	}
}
