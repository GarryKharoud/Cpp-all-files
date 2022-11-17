#include<iostream>
using namespace std;
class employee
{
	public:
	char name[50];
	int ID;
	void enter()
	{
		cout<<"Enter The Name = ";
		fflush(stdin);
		gets(name);
		cout<<"Enter The ID = ";
		cin>>ID;
	}
	void display()
	{
		cout<<"The Name = "<<name<<endl;
		cout<<"The ID = "<<ID<<endl;
	}
};
class permanent : public employee
{
	public:
		int salary;
		void enter()
		{
			cout<<"Enter The Salary = ";
			cin>>salary;
		}
		void display()
		{
			cout<<"The Salary = "<<salary<<endl;
		}
};
class temporary : public employee
{
	public:
		int wages;
		void enter()
		{
			cout<<"Enter The Daily Wages = ";
			cin>>wages;
		}
		void display()
		{
			cout<<"The daily wages are = "<<wages<<endl;
		}
};
main()
{
	int i,j=0,s=0,t;
	permanent k[50];
	temporary h[50];
	for(i=0;i<=49;i++)
	{
		int a,b,c;
		cout<<"Press 1 To Enter The Data  "<<endl;
		cout<<"Press 2 To Display The Data "<<endl;
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"Press 1 To Enter Data In Permanent "<<endl;
				cout<<"Press 2 To Enter Data In Temporary "<<endl;
				cin>>b;
				switch(b)
				{
					case 1:
						k[j].employee::enter();
						k[j].enter();
						j=j+1;
						break;
					case 2:
						h[s].employee::enter();
						h[s].enter();
						s=s+1;
						break;
				}
			break;
			case 2:
				cout<<"Press 1 To Display Data In Permanent "<<endl;
				cout<<"Press 2 To Display Data In Temporary "<<endl;
				cin>>c;
				switch(c)
				{
					case 1:
						for(t=0;t<j;t++)
						{
							k[j].employee::display();
							cout<<endl;
							k[j].display();
						}
						break;
					case 2:
						for(t=0;t<s;t++)
						{
							h[s].employee::display();
							cout<<endl;
							h[s].display();
						}
						break;
				}
			break;
		}
	}
}
