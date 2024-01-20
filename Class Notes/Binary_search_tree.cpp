// Binary search tree code,look at notebook for concept
// WAP to create one Binary search tree
// rules of BST
//  left:< root
// right:>root
// Every Element in left must be less then Root and every element in right must be greater than Root
#include <iostream>
using namespace std;
struct Node
{
     int data;
     Node *left;
     Node *right;
};
Node* create(int item)
{
     Node* newnode= new Node;
     newnode->data=item;
     newnode->left=NULL;
     newnode->right=NULL;
}
Node* insert(Node* node,int item)
{
     if(node==NULL) return create(item);
     if(item<node->data) node->left=insert(node->left,item);
     else if (item>node->data) node->right=insert(node->right,item);
     else return node;
}
void display(Node* root)
{
     if(root==NULL) return;
     display(root->left);
     cout<<root->data<<" ";
     display(root->right);
}
//search function
Node* search(Node* node,int no)
{
     if(node==NULL || node->data==no) return node;
     if(no<node->data) return search(node->left,no);
     if(no>node->data) return search(node->right,no);
     else return node;
}
int main(void)
{
     Node *root = NULL;
     root = insert(root, 9);
     insert(root, 5);
     insert(root, 18);
     insert(root, 12);
     insert(root, 6);
     insert(root, 4);
     insert(root, 14);
     insert(root, 10);
     insert(root, 8);
     insert(root, 11);
     cout<<"BST DONE";
     display(root);
     // searching in BST
     int no = 10;
     if (search(root,no)==NULL)
     {
          /* code */
          cout<<"\n Number not present";
     }
     else
     {
          cout<<" \n Number found"<<endl;
     }
     
     return 0;
}