#include<iostream>
using namespace std;
main()
{
	int i,j,s=4,k=0;
	for(j=1;j<=5;j=j+1)
	{
		for(i=1;i<=s;i=i+1)
		{
		   cout<<" ";
	    }
		cout<<"*";
		
		for(i=1;i<=k;i=i+1)
		{
			if(j==3)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
	    }
		cout<<"*";
		cout<<"\n";
		s=s-1;
		k=k+2;
	}
}
