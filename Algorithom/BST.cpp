#include<bits/stdc++.h>
using namespace std;
struct bstnode{
    bstnode* right;
    bstnode* left;
    int data;
};

bstnode* getnewnode(int data){
    bstnode* newnode= new bstnode();
    newnode->data=data;
    newnode->right=newnode->left=NULL;
    return newnode;
}
bstnode* insert(bstnode* root,int data){
       if(root==NULL){
          root=getnewnode(data);
       }
       else if(data<=root->data){
        root->left=insert(root->left,data);
       }
       else root->right=insert(root->right,data);

       return root;

}
bool search(bstnode* root,int data){
    if(root==NULL){
        return false;
    }
    else if(data==root->data){
        return true;
    }
    else if(data<=root->data){
        return search(root->left,data);
    }
    else {
        search(root->right,data);
    }
}
int main()
{
    int n,a,b,c;
    bstnode* root=NULL;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        root=insert(root,a);
    }
    cin>>b;
    if(search(root,b)==true){
        cout<<"found"<<endl;
    }
    else cout<<"not found"<<endl;
}
