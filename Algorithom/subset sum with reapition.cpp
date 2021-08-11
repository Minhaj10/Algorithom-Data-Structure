#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve(ll index,ll arr[],ll n,ll sum)
{

    if(index==n)
    {
        if(sum==0)
        {
            return 1;
        }
        else return 0;
    }

    ll l=0;
    ll r=0;

     if(arr[index]<=sum){
        sum-=arr[index];
        l=solve(index,arr,n,sum);
        sum+=arr[index];
     }

     r=solve(index+1,arr,n,sum);

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

    ll ans=solve(0,arr,n,k);

    cout<<ans<<endl;

}





