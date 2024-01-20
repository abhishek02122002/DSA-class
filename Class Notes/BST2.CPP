//WAP to create a binary tree recursively and print the inorder traversal
#include<iostream>
using namespace std;
struct Node
{
     char val;
     Node* left;
     Node* right;
};
Node* create()
{
     char val;
     cout<<"Enter the Element(or 'X' for No Element)";
     cin>>val;
     if(val=='X')
     {
          return NULL ;
     }
     Node* newnode= new Node;
     newnode->val=val;
     cout<<"Enter the left child of "<<val<<" ";
     newnode->left=create();
     cout<<"Enter the right side of "<<val<<" ";
     newnode->right=create();
     return newnode;
}
void display(Node* root)
{
     if(root==NULL) return;
     display(root->left);
     cout<<root->val<<" ";
     display(root->right);
}
void display2(Node* root)
{
     if(root==NULL) return;
     cout<<root->val<<" ";
     display2(root->left);
     display2(root->right);
}

int main(void)
{
     Node* root=NULL;
     root=create();
     cout<<"Binary Tree Created successfullly: "<<endl<<endl;
     cout<<"The inorder traversal is: ";
     display(root);// inorder to print
     cout<<endl<<endl;
     cout<<"Preorder of the tree is:-";
     display2(root);//preorder program
     return 0;
}