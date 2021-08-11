#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(q) (q).begin(),(q).end()
#define pi acos(-1)
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int mod=1e9+7;
const int MOD = (int)1e9+7;
const int MAX = 1e7+50;
//Author : @minhaj ahmed
vector<ll> adj[1000007];

void solve()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    ll target_sum;
    cin>>target_sum;

    ll track[100007]={0};

    for(ll i=0;i<n;i++){
        ll tmp=target_sum-arr[i];
        if(track[tmp]==1){
            cout<<"TARGET SUM FOUND"<<endl;
            return;
        }
        else{
            track[arr[i]]=1;
        }
    }

    cout<<"NOT FOUND"<<endl;

}
int main()
{
    int a,b,c,d,t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


     //cin>>t;
     //while(t--){

        solve();
    // }


}


