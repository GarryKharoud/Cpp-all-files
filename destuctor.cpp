#include<iostream>
using namespace std;
class student
{
	public:
		char name[50];
		int rollno;
		student()
		{
			cout<<"hello";
		}
		~student()
		{
			cout<<"bye\n";
		}
};
student a;
int main(){
	cout<<"\nMain begins\n";
	student b;
	{
		cout<<"\ninner scope begins\n";
		student c;
		cout<<"\ninner scope ends\n";	
	}
	cout<<"\nmain end\n";
	return 0;
}
