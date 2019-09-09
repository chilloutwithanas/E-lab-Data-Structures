//Author Pulkit Singh

#include <iostream> 
#include <queue> 
using namespace std; 
struct node1;
struct node 
{ 
	struct node *left; 
	int data; 
	struct node *right; 
}; 

int treeHeight(node *root) 
{ 
	if (root == NULL) 
		return 0; 

	queue<node *> q; 

  
	q.push(root); 
	int height = 0; 

	while (1) 
	{ 
      
		int nodeCount = q.size(); 
		if (nodeCount == 0) 
			return height; 

		height++; 
		while (nodeCount > 0) 
		{ 
			node *node = q.front(); 
			q.pop(); 
			if (node->left != NULL) 
				q.push(node->left); 
			if (node->right != NULL) 
				q.push(node->right); 
			nodeCount--; 
		} 
	} 
} 

node* newNode(int data) 
{ 
	node *temp = new node; 
	temp->data = data; 
	temp->left = NULL; 
	temp->right = NULL; 
	return temp; 
} 


void insert(struct node* temp, int key) 
{ 
    queue<struct node*> q; 
    q.push(temp); 
    while (!q.empty()) { 
        struct node* temp = q.front(); 
        q.pop(); 
  
        if (!temp->left) { 
            temp->left = newNode(key); 
            break; 
        } else
            q.push(temp->left); 
  
        if (!temp->right) { 
            temp->right = newNode(key); 
            break; 
        } else
            q.push(temp->right); 
    } 
} 

int main() 
{ int x;
 cin>>x;
 int a[x];
 struct node* root = newNode(a[0]); 
 for(int i=1;i<x;i++) insert(root, a[x]); 
  cout << treeHeight(root); 
  return 0; 
} 
