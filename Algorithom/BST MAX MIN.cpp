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
int findmin(bstnode* root){
     if(root==NULL){
            cout<<"Tree is empty"<< endl;
        return -1;
     }
     else if(root->left==NULL){
        return root->data;
     }
     return findmin(root->left);
}
int maxx(bstnode* root){
     if(root==NULL){
        cout<<"Tree is empty"<<endl;
        return -1;
     }
     else if(root->right==NULL){
        return root->data;
     }
     return maxx(root->right);
}
int findhight(bstnode* root){
     if(root==NULL){
        return -1;
     }
     int lefthight=findhight(root->left);
     int righthight=findhight(root->right);
     return max(lefthight,lefthight)+1;
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
    cout<<maxx(root)<<endl;
    cout<<findmin(root)<<endl;
    cin>>b;
    if(search(root,b)==true){
        cout<<"found"<<endl;
    }
    else cout<<"not found"<<endl;
    cout<<findhight(root)<<endl;;
}

