#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>arr[n+1];
    int u,v,wt;

    for(int i=0;i<m;i++){
        cin>>u>>v>>wt;
        arr[u].push_back({v,wt});
        arr[v].push_back({u,wt});
    }

    return 0;
}

