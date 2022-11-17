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
	node *start=NULL,*ptr,*temp,*temp1,*temp2;
	int i;
	while(1)
	{
		cout<<"Press 1 To Enter Data "<<endl<<"Press 2 To Display Data "<<endl;
		cout<<"Press 3 To Sort Data"<<endl;
		cin>>i;
		cout<<endl;
		if(i==1)
		{
			ptr=new node();
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
			while(temp!=NULL)
			{
				cout<<temp->data;
				temp=temp->next;
				cout<<endl;
			}
		}
		if(i==3)
		{
			temp=start;
			while(temp!=NULL)
			{
				temp1=temp->next;
				while(temp1!=NULL)
				{
					if(temp->data>temp1->data)
					{
						int tt;	
						tt=temp->data;
						temp->data=temp1->data;
						temp1->data=tt;
					}
					temp1=temp1->next;
				}
				temp=temp->next;
			}
		}
	}
}
