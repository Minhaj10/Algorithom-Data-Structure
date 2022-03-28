#include<bits/stdc++.h>
using namespace std;

int toposortdfs(int node,vector<int>adj[],vector<bool>&vis,stack<int>&stk){
    vis[node]=1;

    for(auto it:adj[node]){
        if(!vis[it]){
            toposortdfs(it,adj,vis,stk);
        }
    }

    stk.push(node);
}
int main()
{
    int node;

    cin>>node;

    vector<int>adj[node];
    vector<bool>vis(node,0);

    int u,v;

    stack<int>stk;
    vector<int>ans;


    for(int i=0;i<node;i++){
            cin>>u>>v;
            adj[u].push_back(v);
    }


    for(int i=0;i<node;i++){
        if(!vis[i]){
            toposortdfs(i,adj,vis,stk);
        }
    }

    while(!stk.empty()){
        int tmp=stk.top();
        ans.push_back(tmp);
        stk.pop();
    }

    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;

}
