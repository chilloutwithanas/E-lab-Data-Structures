 #include <stdio.h>
#include <stdlib.h>

#define CAPACITY 5

struct sNode {
};

void Display(struct sNode* top);

int stack[CAPACITY];
int top=-1;
struct Node1
{
 
};
void push(int ele)
{
  top++;
  stack[top]=ele;
  //printf("%d ",ele);
}

int pop()
{
  int ele;
  ele=stack[top];
  printf("%d ",ele);
  top--;
  
  return top;
}

void traverse(int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d ",stack[i]);
  }
}

int main() 
{

//struct node s;
  int n,ele,i;
  
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&ele);
    push(ele);
  }
  printf("Original Stack \n");
  for(i=0;i<n;i++)
  {
    pop();
  }
  printf("\nReversed Stack \n");
  traverse(n);
	return 0;
}