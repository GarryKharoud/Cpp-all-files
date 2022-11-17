#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,i,j=0,bill=0;
	for(i=1;i==1;)
	{
	cout<<"welcome \n";
	cout<<"press 1 for breakfast \n";
	cout<<"press 2 for lunch \n";
	cout<<"press 3 for dinner \n";
	cin>>a;
	switch(a)
	{
		case 1:
		cout<<"item name         price \n";
		cout<<"sandwich          50 \n";
		cout<<"tea               30 \n";
		cout<<"coffee            20 \n";
		cin>>b;
		switch(b)
		{
			case 1: 
			cout<<"hope you like the sandwich \n";
			bill=bill+50;
			break;
			case 2:
			cout<<"hope you like the tea \n";
			bill=bill+30;
			break;
			case 3:
			cout<<"hope you like the coffee \n";
			bill=bill+20;
			break;
		}
		break;
		case 2:
			cout<<"item name            price \n";
			cout<<"pork                 100 \n";
			cout<<"chicken              50 \n";
			cout<<"pig                  80 \n";
			switch(c)
			{
				case 1: 
			    cout<<"hope you like the pork \n";
			    bill=bill+100;
			    break;
			    case 2:
			    cout<<"hope you like the chicken \n";
			    bill=bill+50;
			    break;
			    case 3:
			    cout<<"hope you like the pig \n";
			    bill=bill+80;
			    break;
			}
			break;
			case 3:
				cout<<"item name           price\n";
				cout<<"pizza               120 \n";
				cout<<"cake                180 \n";
				cout<<"pastries             20 \n";
				cin>>d;
				switch(d)
				{
					case 1:
						cout<<"hope you like your pizza \n";
						bill=bill+120;
						break;
					case 2:
						cout<<"hope you like your cake \n";
						bill=bill+180;
						break;
					case 3:
						cout<<"hope you like your pastries \n";
						bill=bill+20;
						break;
				}
	        }
	    j=bill;
        cout<<"\n";
		cout<<"do you want to comtinue (1/0) : \n";
		cout<<"press 1 to continue"<<"\n";
        cin>>i;
	}
		cout<<"\n";
		cout<<"bill :";
		cout<<bill;
		return 0;
	
}
