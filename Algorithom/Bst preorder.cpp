#include<bits/stdc++.h>
using namespace std;

struct bstnode{
    bstnode* right;
    bstnode* left;
    char data;
};

bstnode* getnewnode(char data){
    bstnode* newnode= new bstnode();
    newnode->data=data;
    newnode->right=newnode->left=NULL;
    return newnode;
}

void preorder(bstnode* root){
  if(root==NULL) return ;

  cout<<root->data<<endl;
  preorder(root->left);
  preorder(root->right);

}
void inorder(bstnode* root){
     if(root==NULL) return ;
     inorder(root->left);
     cout<<root->data<<endl;
     inorder(root->right);
}
void postorder(bstnode* root){
    if(root==NULL) return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
}
bstnode* insert(bstnode* root,char data){
       if(root==NULL){
          root=getnewnode(data);
       }
       else if(data<=root->data){
        root->left=insert(root->left,data);
       }
       else root->right=insert(root->right,data);

       return root;

}
int main()
{
    int n,a,b;
    char c;
    bstnode* root=NULL;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        root=insert(root,'c');
    }
     preorder(root);
     cout<<endl;
     inorder(root);
     cout<<endl;
     postorder(root);
     cout<<endl;

}


