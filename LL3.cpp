#include <stdio.h>
#include <stdlib.h>
struct node123
{
  int data;
  struct node123* link;
};
struct node123* head=NULL;
int k,m,f=0;
void create()
{
 struct node123* p;
 p=head;
 struct node123* temp=(struct node123*)malloc(sizeof(struct node123));
 scanf("%d",&temp->data);
 temp->link=NULL;
 if(head!=NULL)
 {
   while(p->link!=NULL)
     p=p->link;
    p->link=temp;
 }
  else
    head=temp;
}
void insert()
{
  struct node123* p=head;
  while(p!=NULL)
  {
     if(p->data==k)
     {
       f=1;
       break;
     }
     p=p->link;
  }
  if(f==0)printf("Node not found! \n");
  else
  {
  struct node123* temp=(struct node123*)malloc(sizeof(struct node123));
  temp->data=m;
  temp->link=p->link;
  p->link=temp;
  }
}
void print(struct node123* temp)
{
  printf("Linked List : ");
  while(temp!=NULL)
  {
    printf("->%d",temp->data);
    temp=temp->link;
  }
}
int main() {
  int n;
  scanf("%d",&n);
  while(n--)
  create();
  scanf("%d%d",&k,&m);
  insert();
  struct node123* temp;
  temp=head;
  print(temp);
  return 0;
}