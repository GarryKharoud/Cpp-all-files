#include<iostream>
using namespace std;
class node
{
	public:
		int pow,coeff;
		node*next;
};
main()
{
	node *start=NULL,*p1,*p2;
	int i,j,k;
	cout<<"Number of Test Cases = "<<endl;
	cin>>i;
	j=0;
	k=0;
	while(j<=i)
	{
		cout<<"Enter The Degree = "<<endl;
		p1=new node();
		cin>>p1->pow;
		int a=p1->pow;
		int b[a];
		p1->coeff[a];
		cout<<"Enter The Polynomial = "<<endl;
		cin>>p1->coeff[a];
		cout<<endl;
		j++;
	}
	while(k<=i)
	{
		cout<<"Enter The Degree = "<<endl;
		p2=new node();
		cin>>p2->pow;
		int m=p2->pow;
		int n[m];
		p1->coeff=n[m];
		cout<<"Enter The Polynomial = "<<endl;
		cin>>p2->coeff;
		k++;
	}
	while(1)
	{
		//Subtracting The Polynomials
		if(p1->coeff!=' 0 ')
		{
			p1->coeff-p2->coeff;
		}
	} 
}
