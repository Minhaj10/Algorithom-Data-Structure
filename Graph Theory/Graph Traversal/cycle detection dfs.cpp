#include<bits/stdc++.h>
using namespace std;


bool dfs(int node,vector<int>&vis,vector<int>arr[])
{


    if(vis[node]==1)
    {
        return true;
    }
    if(vis[node]==0)
    {
        vis[node]=1;
        for(auto it:arr[node])
        {
            if(vis[it]==0)
            {

                if(dfs(it,vis,arr)==1)
                {
                    return true;
                }
            }
        }
    }
    vis[node]=2;



    return false;



}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>arr[n+1];
    vector<int>vis(n+1,0);
    int u,v;

    for(int i=0; i<m; i++)
    {
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    int cnt=0;

    for(int i=0; i<n; i++)
    {
        cnt=0;
        if(vis[i]==0)
        {
            if(dfs(i,vis,arr)==1)
            {
                cnt=1;
                break;
            }
        }
    }

    if(cnt==1) cout<<"There is cycle"<<endl;
    else cout<<"There is no cycle"<<endl;

    return 0;
}




