#include<bits/stdc++.h>
using namespace std;


bool bfs(int node,vector<bool>&vis,vector<int>arr[])
{

    vis[node]=1;

    queue<pair<int,int>>q;
    q.push({node,-1});

    while(!q.empty())
    {
        int child=q.front().first;
        int par =q.front().second;
        q.pop();
        for(auto it:arr[child])
        {
            if(!vis[it])
            {
                q.push({it,child});
                vis[it]=1;
            }
            else if(par!=it){
                return true;
            }
        }
    }
    return false;

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
            if(bfs(i,vis,arr)){
                cnt=1;
            break;
            }
        }
    }
    if(cnt) cout<<"There is a cycle"<<endl;
    else
    cout<<"There is no cycle"<<endl;



    return 0;
}



