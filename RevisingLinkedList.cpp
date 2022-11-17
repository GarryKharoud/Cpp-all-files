#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node*next;
};
main()
{
	int i;
	node *start=NULL,*ptr,*temp;
	while(1)
	{
		cout<<"Press 1 to Enter Data "<<endl<<"Press 1 to Display Data "<<endl;
		cout<<"Press 1 to Enter Data At Begining"<<endl;
		cin>>i;
		if(i==1)
		{
			ptr=new node;
			cin>>ptr->data;
			ptr->next=NULL;
			if(start==NULL)
			{
				start=ptr;
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
		if(i==2)
		{
			temp=start;
			if(temp!=NULL)
			{
				cout<<temp->data;
				temp=temp->next;
				cout<<endl;
			}
		}
		if(i==3)
		{
			
		}
	}
}
