#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1][n+1];
    int u,v;

    for(int i=0;i<m;i++){
        cin>>u>>v;
        arr[u][v]=1;
        arr[v][u]=1;
    }

    return 0;
}
