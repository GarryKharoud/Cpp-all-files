#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
main()
{
	node *start= NULL ,*ptr,*temp;
	int i,j;
	while(1)
	{
		cout<<"Press 1 to enter "<<endl<<"Press 2 To Display "<<endl;
		cout<<"Press 3 To Enter at The Begining "<<endl;
		cin>>i;
		if(i==1)
		{
			ptr =new node();
			cin>>ptr->data;
			ptr->next=NULL;
			if(start==NULL)
			{
				start =ptr;
			}
			else
			{
				temp=start;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=ptr;
			}
		}
		else
		{
			if(i==2)
			{
				temp=start;
				while(temp!=NULL)
				{
					cout<<temp->data;
					temp=temp->next;
					cout<<endl;
				}
			}
		}
		if(i==3)
		{
			ptr =new node();
			cin>>ptr->data;
			ptr->next=start;
			start =ptr;
		}
	}
}
