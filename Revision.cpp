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
	node *start=NULL,*ptr,*temp;
	int i;
	while(1)
	{
		cout<<"Press 1 to Enter "<<endl<<"Press 2 to Display"<<endl;
		cin>>i;
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
	}
}
