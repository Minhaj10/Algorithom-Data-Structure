#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

string dir="DRUL";
int ai[]={1,0,-1,0};
int aj[]={0,1,0,-1};


void solve(ll i,ll j,ll n,ll m,string s,vector<vector<ll>>&vis)
{
    if(i>=n || j>=m || i<0 || j<0 || vis[i][j]==1) return;

    if(i==n-1 && j==m-1)
    {
        cout<<s<<endl;
        return;
    }
    vis[i][j]=1;

     for(int x=0;x<4;x++){
        s+=dir[x];
        solve(i+ai[x],j+aj[x],n,m,s,vis);
        s.pop_back();
     }
     vis[i][j]=0;

}
int main()
{

    ll n,k,m;
    cin>>n>>m;
    ll arr[n+5][m+5];
    string s="";
    vector<vector<ll>>vis(n,vector<ll>(m,0));

    solve(0,0,n,m,s,vis);

 //   cout<<ans<<endl;

}







