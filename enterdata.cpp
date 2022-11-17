#include<iostream> 
using namespace std;
class data
{
	public:
		char name[50];
		int rollno;
};
int main(){
	int a,h,j,k=0;
	for(h=0; h<=49; h++)
	{
		cout<<"\nPress 1 to Enter data ";
		cout<<"\nPress 2 to display data\n";
		cin>>a;
		data b[50];
		switch(a)
		{	
			case 1:
				cout<<"Enter your name : ";
				fflush(stdin);
				gets(b[k].name);
				cout<<"Enter rollnumber: ";
				cin>>b[k].rollno;
				k=k+1;
				break;
			case 2:
				for(j=0; j<k; j++)
				{
					cout<<"name: "<<b[j].name;
					cout<<"\nrollnumber: "<<b[j].rollno<<endl;
				}
				break;
		}
	}
	return 0;
}
