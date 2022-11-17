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
	node *start= NULL ,*ptr,*temp,*county,*temp1,*temp2;
	int i;
	while(1)
	{
		cout<<"Press 1 to enter "<<endl<<"Press 2 To Display "<<endl;
		cout<<"Counting The Size"<<endl;
		cin>>i;
		if(i==1)
		{
			ptr =new node();
			cin>>ptr->data;
			cout<<endl;
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
			temp1=start;
//			while(temp!=NULL){
//				if(temp->data == temp1->data){
//					start=temp1->next;
//					break;
//				}
//				else{
//					temp=temp->next;
//				}
//			}
			while(temp1->next!=NULL){
			temp=temp1;
			while(temp->next!=NULL){
				if(temp1->next->data==temp->data){
					temp1->next=temp1->next->next;
				}
				temp=temp->next;
			}
			temp1=temp1->next;
		}
		}
	}
}
