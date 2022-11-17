// C++ program to pass structure as an argument
// to the functions using Call By Reference Method

#include <bits/stdc++.h>
using namespace std;

struct number {
	int n;
};

// Accepts structure as an argument
// using call by reference method
void increment(number& n2)
{
	n2.n++;
}

void initializeFunction()
{
	number n1;

	// assigning value to n
	n1.n = 10;

	cout << " number before calling "
		<< "increment function:"
		<< n1.n << endl;

	// calling increment function
	increment(n1);

	cout << "number after calling"
		<< " increment function:" << n1.n;
}

// Driver code
int main()
{
	// Calling function to do required task
	initializeFunction();

	return 0;
}

