#include<iostream>
using namespace std;
main()
{
	int a,b,c,d;
	cout<<"WELCOME"<<"\n";
	cout<<"1 for  breakfast"<<"\n";
	cout<<"2 for lunch"<<"\n";
	cout<<"3 for dinner"<<"\n";
	cin>>c;
	switch(c)
	{
	case 1:
	 cout<<"item name      price \n";
	 cout<<"sandwich       50 \n";
	 cout<<"tea             10 \n";
	 cout<<"coffee         20 \n";
	 cin>>b;
	 switch(b)
	 {
	 	case 1:
	 		cout<<"hope you like the sandwich ";
	 		break;
		case 2:
			cout<<"hope you like the tea ";
			break;
		case 3:
			cout<<"hope you like the coffee ";
		break;
	 }
	 break;
    case 2:
     cout<<"item name      price \n";
     cout<<"chicken         100 \n";
     cout<<"fish           90 \n";
     cout<<"goat           150 \n";
     cin>>a;
    
     switch(a)
      {
	 	case 1:
	 	cout<<"hope you like the chicken ";
	 		break;
		case 2:
			cout<<"hope you like the fish ";
			break;
	    case 3:
		    cout<<"hope you like the goat";
		break;
	 }
	  break;
    case 3:
     cout<<"item name      price \n";
     cout<<"fries          100 \n";
     cout<<"cake           200 \n";
     cout<<"pastries       50  \n";
     cin>>d;
    } 
	switch(d)
	{
	 	case 1:
	 		cout<<"hope you like the fries ";
	 		break;
		case 2:
			cout<<"hope you like the cake ";
			break;
		case 3:
		cout<<"hope you like the pastries ";
		break;
	 }
}
