#include<iostream>
using namespace std;
main()
{
	int a,b,c,i;
	cout<<"enter a =";
	cin>>a;
	cout<<"enter b =";
	cin>>b;
	cout<<"press 1 to add \n";
	cout<<"press 2 to subtract \n";
	cout<<"press 3 to multiply \n";
	cout<<"press 4 to divide \n";
	cin>>i;
	switch(i)
	{
	  case 1: c=a+b;
	  cout<<c;
	  break;
      case 2: c=a-b;
	  cout<<c;
	  break;
	  case 3: c=a*b;
	  cout<<c;
	  break;
	  case 4: c=a/b;
	  cout<<c;
    }
}
