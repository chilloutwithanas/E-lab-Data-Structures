#include <iostream>
using namespace std;

struct node
{
	int data;
  	node* next;
};
node* head=NULL;
void push(node** head, int n)
{
	node* newnode=new node();
  	node *curr= (*head);
  	newnode->data=n;
  	newnode->next=NULL;
  	if(*head==NULL)
    {
    	*head=newnode;
      	return;
    }
  
  while(curr->next!=NULL)
    curr=curr->next;
  
  curr->next=newnode;
  
  return;
  	
}

void display()
{
node* curr= head;  
cout<<"Linked List : ";
while(curr!=NULL)
{	
	cout<<"->"<<curr->data;
  	curr=curr->next;
}
  return;
}
int main() {
	
  	int n,i,num;
  	cin>>n;
  	for(i=0;i<n;i++)
    {
    	cin>>num;
      	push(&head,num);
    }
  display();
  return 0;
}