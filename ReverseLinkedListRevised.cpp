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
	node *start=NULL,*temp,*ptr;
	while(1)
	{
		cout<<"Press 1 To Enter Data"<<endl<<"Press 2 To Display Data"<<endl;
		cout<<"Press 3 To Reverse Linked List";
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
				while(temp!=NULL)
				{
					temp=temp->next;
				}
				temp->next=ptr;
			}
		}
		if(i==2)
		{
			temp=start;
		}
	}
}
