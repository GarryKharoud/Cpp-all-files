#include<iostream>
using namespace std;
class employee
{
	public:
		char name[50];
		int id;
	virtual	void accept()
		{
			cout<<"Enter name: ";
			fflush(stdin);
			gets(name);
			cout<<"Enter id  : ";
			cin>>id;
		}
	virtual	void display()
		{
			cout<<"name: "<<name<<endl;
			cout<<" id : "<<id<<endl;
		}	
};
class permanent : public employee
{
	public:
		int salary;
		void accept()
		{
			employee::accept();
			cout<<"Enter salary: ";
			cin>>salary;
		}
		void display()
		{
			employee::display();
			cout<<"salary: "<<salary<<endl;
		}
};
class temporary : public employee
{
	public:
		int dw;
		void accept()
		{
			employee::accept();
			cout<<"Enter Daily wages: ";
			cin>>dw;
		}
		void display()
		{
			employee::display();
			cout<<"Daily wages: "<<dw<<endl;
		}
};
int main(){
	int i,k=0,s=0,d;
	employee *g[10];
	
	for(i=0; i<=49; i++)
	{
		int a,b,c;
		cout<<"Press 1 to enter data\n";
		cout<<"Press 2 to display data";
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
						g[k]=new permanent;
					
						g[k]->accept();
						k=k+1;
						break;
					case 2:
							g[k]=new temporary;
						
						g[k]->accept();
						k=k+1;
						break;
				}
				break;
			case 2:
			
				
						for(d=0; d<k; d++)
						{
						
							cout<<endl;
							g[d]->display();
						}
					
				break;	
		}
	}
	return 0;
}
