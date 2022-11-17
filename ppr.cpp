#include<iostream>
using namespace std;
main()
{
	int a[5]={2,4,6,8,3};
	int n=5;
	for(int i=n-1;i>=1;i--)
   	{
       int key=a[i];
       
       int j=i-1;
       while(a[j]>key && j>=0)
       {
          a[j+1]=a[j];
          for(int k=0;k<n;k++)
            {
			cout<<a[k]<<" ";
		}
            cout<<endl;
          j--; 
          
       }
       a[j+1]=key;
       for(int k=0;k<n;k++)
          {
			  cout<<a[k]<<" ";
		}
            break;
       
       
   }
}
