#include<iostream>
using namespace std;
int main(){
	char a[50],j;
	int i,l;
	cout<<"Enter a string: ";
	gets(a);
	for(i=0; a[i]!='\0'; i++)
	{
		for(j='a';j<='z';j++)
		{
			if(a[i]==j)
			{
				l=0;
				l=l+1;
			}
		}
		cout<<a[i]<<" : "<<l<<"times"<<endl;
	}
	return 0;
}
