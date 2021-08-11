#include<bits/stdc++.h>
using namespace std;

typedef long long int ll

vector<int>arr[100000];
int vis[100001];

void dfs(int node){
    vis[node]=1;
    for(int it:arr[node]){
        if(!vis[it]){
            dfs(it);
        }
    }
}
int main(){


   ll n,m;

   cin>>n>>m;
   ll a,b;
   for(ll i=1;i<=m;i++){
       cin>>a>>b;
       arr[a].push_back(b);
       arr[b].push_back(a);
   }

   dfs(1);



}
