#include<iostream>
using namespace std;
main()
{
	char a[50],j;
	int i,h;
	cout<<"Enter the string = ";
	gets(a);
	for(j='a';j<='z';j++)
	{
		h=0;
	    for(i=0;i<=!'\0';i++)
	        {
			    if(a[i]==j)
			    {
				    h=h+1;
			    }
            }
            cout<<"The number of times "<<j<<" is repeated = "<<h<<endl;
	}
}
