#include<iostream>
using namespace std;
class node
{
	public :
		int data;
		node*next;
};
main()
{
	node *start=NULL, *ptr, *temp, *temp1;
	int i;
	while(1)
	{
		cout<<"Press 1 To Enter"<<endl<<"Press 2 To Display"<<endl;
		cout<<"Press 3 To Enter at Begining"<<endl<<"Press 4 To Delete  at Begining "<<endl;
		cout<<"Press 5 To Delete at Specific Place "<<endl;
		cout<<"Press 6 To Insert Through value at Specific Place"<<endl;
		cin>>i;
		cout<<endl;
		if(i==1)
		{
			ptr =new node();
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
			ptr =new node();
			cin>>ptr->data;
			ptr->next=start;
			start =ptr;
		}
		if(i==4)
		{
			start=start->next;
		}
		if(i==5)
		{
			cout<<"Enter The Position You Want To Delete = ";
			int a;
			cin>>a;
			temp=start;
			for(int h=1;h<a;h++)
			{
				temp1=temp;
				temp=temp->next;
			}
			temp1->next=temp->next;
		}
		if(i==6)
		{
			cout<<"Enter The Position You Want To Insert = ";
			int b;
			cin>>b;
			int h;
			temp=start;
			if(h=1)
			{
				ptr=new node();
				cin>>ptr->data;
				ptr->next=start;
				start=ptr;
			}
			else
			{
			for(h=1;h<b-1;h++)
			{
				temp1=temp;
				temp=temp->next;
			}
			ptr=new node();
			cin>>ptr->data;
			ptr->next=temp->next;
			temp->next=ptr;
		}
		}
	}
}
