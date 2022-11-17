#include<iostream>
using namespace std;
class student
{
	public:
	char name[50];
	int rollnumber;
	student()
	{
		cout<<"  HELLO "<<endl;
	}
	~student()
	{
		cout<<"  BYE  "<<endl;
	}
};
main()
{
	student a;
	cout<<"  MAIN BEGINS  "<<endl;
	student b;
	{
		cout<<"  INNER SCOPE BEGINS  "<<endl;
		student c;
		cout<<"  INNER SCOPE ENDS  "<<endl;
	}
	cout<<"  MAIN END  "<<endl;
}
