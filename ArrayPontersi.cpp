#include<iostream>
using namespace std;
main()
{
	int a[5]={7,8,10,9,12};
	cout<<"Value of a1 = "<<a[1]<<endl;
	cout<<"Address Of a[3] = "<<&a[3];
	//
	cout<<"a       = "<<a<<endl;
	//Starting Of Array Size
	cout<<"&a      = "<<&a<<endl;
	//Addition of 4 bit Size
	cout<<"&a[0]+1 = "<<a[0]+1<<endl;
	//Addition Of Variable
	cout<<"a+1     = "<<a+1<<endl;	
	// Addition Of Array Size
	cout<<"&a+1    = "<<&a+1;
}
