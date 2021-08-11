#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve(ll index,ll arr[],ll n,ll sum,ll k)
{

    if(index==n)
    {
        if(sum%k==0)
        {
            return 1;
        }
        else return 0;
    }

    sum+=arr[index];
    ll l=solve(index+1,arr,n,sum,k);
    sum-=arr[index];

    ll r=solve(index+1,arr,n,sum,k);

    return l+r;
}
int main()
{

    ll n,k;
    cin>>n>>k;
    ll arr[n+5];

    vector<ll>vec;
    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    ll ans=solve(0,arr,n,sum,k);

    cout<<ans-1<<endl;

}




