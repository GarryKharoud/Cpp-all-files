#include<iostream>
using namespace std;
class employee
{
	public:
		char name[50];
		int id;
		void accept()
		{
			cout<<"Enter name = ";
			fflush(stdin);
			gets(name);
			cout<<"Enter id  = ";
			cin>>id;
		}
		void display()
		{
			cout<<"name = "<<name<<endl;
			cout<<" id = "<<id<<endl;
		}	
};
class permanent : class employee
{
	public:
		int salary;
		void accept()
		{
			cout<<"Enter salary = ";
			cin>>salary;
		}
		void display()
		{
			cout<<"salary: "<<salary<<endl;
		}
};
class temporary : public employee
{
	public:
		int dw;
		void accept()
		{
			cout<<"Enter Daily wages = ";
			cin>>dw;
		}
		void display()
		{
			cout<<"Daily wages: "<<dw<<endl;
		}
};
int main(){
	int i,k=0,s=0,d;
	permanent g[50];
	temporary h[50];
	for(i=0; i<=49; i++)
	{
		int a,b,c;
		cout<<endl<<"Press 1 to enter data\n";
		cout<<"Press 2 to display data"<<endl;
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"Press 1 to enter data for permanent"<<endl;
				cout<<"Press 2 to enter data for temporary"<<endl;
				cin>>b;
				switch(b)
				{
					case 1:
						g[k].employee::accept();
						g[k].accept();
						k=k+1;
						break;
					case 2:
						h[s].employee::accept();
						h[s].accept();
						s=s+1;
						break;
				}
				break;
			case 2:
				cout<<"Press 1 to display data for permanent employee"<<endl;
				cout<<"Press 2 to display data for temporary employee"<<endl;
				cin>>c;
				switch(c)
				{
					case 1:
						for(d=0; d<k; d++)
						{
							g[d].employee::display();
							cout<<endl;
							g[d].display();
						}
						break;
					case 2:
						for(d=0; d<s; d++)
						{
							h[d].employee::display();
							cout<<endl;
							h[d].display();
						}
						break;	
				}
				break;	
		}
	}
	return 0;
}
