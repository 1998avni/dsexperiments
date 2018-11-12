
#include<iostream>
using namespace std;   
struct node 
{ 
    int key; 
    struct node *left=NULL, *right=NULL; 
};
  
struct node *newNode(int item) 
{ 
    struct node *temp = new node; 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
  
void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        cout<<root->key;
        inorder(root->right); 
    } 
} 
  
void preorder(struct node *root)
{
	if(root==NULL)
	return;
	cout<<root->key<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node *root)
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
    cout<<root->key<<" "; 
	
}
struct node* insert(struct node* node, int key) 
{ 
    
    if (node == NULL) return newNode(key); 
  
    
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else
        node->right = insert(node->right, key); 
  
    return node; 
} 
  

struct node * minValueNode(struct node* node) 
{ 
    struct node* current = node; 
  
    
    while (current->left != NULL) 
        current = current->left; 
  
    return current; 
} 
  

struct node* deleteNode(struct node* root, int key) 
{ 
   
    if (root == NULL) return root; 
  
    if (key < root->key) 
        root->left = deleteNode(root->left, key); 
  
   
    else if (key > root->key) 
        root->right = deleteNode(root->right, key); 
  
    else
    { 
        
        if (root->left == NULL) 
        { 
            struct node *temp = root->right; 
            delete (root); 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
            struct node *temp = root->left; 
            delete (root); 
            return temp; 
        } 
  
       
        struct node* temp = minValueNode(root->right); 
  
        
        root->key = temp->key; 
  
        
        root->right = deleteNode(root->right, temp->key); 
    } 
    return root; 
} 
  

int main() 
{ 
    
    struct node *root = NULL; 
    
    int n,val;
    cin>>val;
    root=insert(root,val);
     do
     {
     	cout<<"press 1 to insert a node"<<endl;
     	cout<<"press 2 to delete a node"<<endl;
     	cout<<"press 3 for inorder traversal"<<endl;
     	cout<<"press 4 for preorder traversal"<<endl;
     	cout<<"press 5 for postorder traversal"<<endl;
     	cout<<"press 8 to quit"<<endl;
     	cout<<"enter your choice"<<endl;
     	cin>>n;
     	
     	switch(n)
     	{
     	case 1:
		 cin>>val;
		 insert(root,val);	
		 break;
		 case 2:
		 	cin>>val;
		 	deleteNode(root,val);
		 	break;
		 	case 3:
		 	inorder(root);
			 break;
			 case 4:
			 preorder(root);
			 break;
			 case 5:
			 postorder(root);
			 break;	
		}
	 }while(n!=8);
	 
}
   
