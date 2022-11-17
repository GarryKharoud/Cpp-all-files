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
	int i;
	node *start=NULL,*temp,*ptr,*swappy;
	while(1)
	{
		cout<<"Press 1 To Enter Data"<<endl<<"Press 2 To Display Data"<<endl;
		cout<<"Press 3 Reverse Data"<<endl;
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
			while(temp!=NULL)
			{
				cout<<temp->data;
				temp=temp->next;
				cout<<endl;
			}
		}
		if(i==3)
		{
		/*	swappy=start;
			start=NULL;
			ptr->next=swappy->next;
			
			int a=0;
			ptr=start;
			temp=start;
			while(ptr!=NULL)
			{
				a++;
				if(ptr->next!=NULL)
				{
					temp=temp->next;
				}
				ptr=ptr->next;
			}
			start=ptr;
			int s=a;
			for(int i=0;i<a;i++)
			{
				ptr->next=temp;
				s--;
				ptr=start;
				for(int j=0;j<s;j++)
				{
					ptr=ptr->next;
					if(j!=s-1)
					{
						temp=temp->next;
					}
				}
			}*/
			int a=0;
			ptr=start;
			while(ptr!=NULL)
			{
				a++;
				ptr=ptr->next;
			}
			temp=ptr;
			ptr=start;
			for(int g=0;g<a/2;g++)
			{
				int v,s=a;
				v=ptr->data;
				ptr->data=temp->data;
				temp->data=v;
				s--;
				temp=start;
				for(int i=1;i<s;i++)
				{
					temp=temp->next;
				}
				ptr=ptr->next;
			}
		}
	}
}
