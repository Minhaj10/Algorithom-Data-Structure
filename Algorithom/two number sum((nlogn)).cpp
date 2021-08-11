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
    sort(arr,arr+n);
    ll target_sum;
    cin>>target_sum;

    ll left=0,right=n-1;

    while(left<=right){
        ll sum=arr[left]+arr[right];
        if(sum==target_sum){
            cout<<"FOUND THE PAIR"<<endl;
            cout<<left+1<<" "<<right+1<<endl;
            return;
        }
        else if(sum<target_sum){
            left++;
        }
        else{
            right--;
        }
    }

    cout<<"NOT found"<<endl;

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



