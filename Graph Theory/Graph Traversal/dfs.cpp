#include<bits/stdc++.h>
using namespace std;


void dfs(int node,vector<bool>&vis,vector<int>arr[])
{

    vis[node]=1;
    for(auto it:arr[node]){
        if(!vis[it]){
            dfs(it,vis,arr);
        }
    }



}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>arr[n+1];
    vector<bool>vis(n+1,0);
    int u,v;

    for(int i=0; i<m; i++)
    {
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    int cnt=0;

    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            cnt++;
            dfs(i,vis,arr);
        }
    }

    cout<<cnt<<endl;

    return 0;
}



