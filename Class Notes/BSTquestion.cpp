// create a binary search tree from the following set of numbers 
#include<iostream>
using namespace std;
struct Node 
{
     int data;
     Node* left;
     Node* right;
};
Node* create(int item)
{
     Node* newnode=new Node;
     newnode->data=item;
     newnode->left=NULL;
     return newnode;
}
Node* insert(Node* root,int item)
{
     if(root==NULL) return create(item);
     if (item<root->data)
     {
          /* code */
          root->left=insert(root->left,item);
     }
     else if(item>root->data)
     {
          root->right=insert(root->right,item);
     }
     return root;
}
void display(Node* root)
{
     if(root==NULL) return ;
     display(root->left);
     cout<<root->data;
     display(root->right);
}
Node* deleteNode(Node* root,int item)
{
     if(root==NULL){return root;}
     if(item<root->data){root->left=deleteNode(root->left,item);return root;}
     else if(item>root->data){root->right=deleteNode(root->right,item);return root;}
     //delete one child
     if(root->left=NULL){Node* temp=root->right;delete root; return temp;}
     if(root->right==NULL){Node* temp=root->left;delete root;return temp;}
     else{//two child
          Node* succParent=root;
          Node* succ=root->right;
          while(succ->left!=NULL)
          {
               succParent=succ;
               succ=succ->left;
          }}
}
int main (void)
{    Node* root= NULL;
     root = insert(root,14);
     insert(root,7);
     insert(root,27);
     insert(root,13);
     insert(root,25);
     insert(root,10);
     insert(root,20);
     insert(root,3);
     insert(root,5);
     insert(root,19);
     cout<<"BST CREATED SUCCESSFULLY";

     display(root);
     int n;
     cout<<"Enter the number you want to delete";
     cin>>n;
     root=deleteNode(root,n);
     display(root);

     return 0;
}
