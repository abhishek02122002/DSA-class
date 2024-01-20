#include<iostream>
using namespace std;
struct Node
{
     char val;
     Node* left;
     Node* right;
};
Node* createNode(char data)
{
     Node* node=new Node;
     node->val=data;
     node->left=NULL;
     node->right=NULL;
     return node;
}
void inOrder(struct Node*root)
{
     if(root==NULL) return;
     inOrder(root->left);
     cout<<root->val<<" ";
     inOrder(root->right);
}
void preOrder(struct Node*root)
{
     if(root==NULL) return ;
     cout<<root->val<<" ";
     preOrder(root->left);
     preOrder(root->right);
}
 void postorder(struct Node*root){
     if(root==NULL) return;
     postorder(root->left);
     postorder(root->right);
     cout<<root->val<<" ";
}
int main(void)
{    Node* root=createNode('A');
     root->left=createNode('B');
     root->left->left=createNode('D');
     root->right=createNode('C');
     root->right->left=createNode('E');
     root->right->left->left=createNode('G');
     root->right->right=createNode('F');
     cout<<"Inorder traversal is "<<endl;
     inOrder(root);
     return 0;
}