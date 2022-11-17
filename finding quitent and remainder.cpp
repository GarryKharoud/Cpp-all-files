#include<iostream>
using namespace std;
int main(){
	int dividend, divisor, quitent, remainder;
	//taking input from user for dividend and divisor
	cout<<"enter the number you want to divide : ";
	cin>> dividend;
	cout<<"enter the number you want the above number to be divided with : ";
	cin>> divisor;
	quitent = dividend/divisor;
	remainder = dividend%divisor;
	cout<<"you entered: "<<dividend << "/" << divisor << endl;
	cout<<"quitent: " <<quitent << ", " << "remainder: " <<remainder;
	return 0;
}