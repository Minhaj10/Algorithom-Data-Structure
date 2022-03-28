#include<bits/stdc++.h>
using namespace std;

int toposortbfs(int node,vector<int>adj[],queue<int>&Q,vector<int>&indegree,vector<int>&ans){

    for(int i=0;i<node;i++){
        if(indegree[i]==0){
            Q.push(i);
        }
    }


    while(!Q.empty()){
        int vertex=Q.front();
        Q.pop();
        ans.push_back(vertex);
        for(auto it:adj[vertex]){
            indegree[it]--;
            if(indegree[it]==0){
                Q.push(it);
            }
        }
    }
}
int main()
{
    int node;

    cin>>node;

    vector<int>adj[node];
    vector<bool>vis(node,0);
    vector<int>indegree(node,0);
    int u,v;

    vector<int>ans;
    queue<int>Q;

    for(int i=0;i<node;i++){
            cin>>u>>v;
            adj[u].push_back(v);
    }


    for(int i=0;i<node;i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }


    toposortbfs(node,adj,Q,indegree,ans);

    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;

}

