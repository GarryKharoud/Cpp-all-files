#include<iostream>
using namespace std;
main(){
	bool j=true;
	while(j==true)
	{
	char c;
	cout<< "enter a character: " ;
	cin>> c;   //taking input from user
	cout<< "ASCII value of " << c << " is " << int(c);   //value declared
	cout<<endl;
	cout<<"Enter 1 for Another 0 to end="<<endl;
	int i;
	cin>>i;
	if(i==1)
	{
		j=true;
	}
	else
	{
		j=false;
	}
}
}
