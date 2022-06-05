#include<bits/stdc++.h>
using namespace std;


void bfs(int node,vector<bool>&vis,vector<int>arr[])
{

    vis[node]=1;

    queue<int>q;
    q.push(node);

    while(!q.empty())
    {
        int child=q.front();
        q.pop();
        for(auto it:arr[child])
        {
            if(!vis[it])
            {
                q.push(it);
                vis[it]=1;
            }
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
            bfs(i,vis,arr);
        }
        for(auto it:vis){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    cout<<cnt<<endl;

    return 0;
}


