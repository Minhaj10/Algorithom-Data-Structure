#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(ll index,ll arr[],ll n,vector<ll>&vec,ll sum,ll k){

     if(index==n){
            if(vec.size()!=0 && sum%k==0){
        for(auto it:vec){
            cout<<it<<" ";
        }
        cout<<endl;
            }
        return;

     }

     vec.push_back(arr[index]);
     sum+=arr[index];
     solve(index+1,arr,n,vec,sum,k);
     vec.pop_back();
     sum-=arr[index];

     solve(index+1,arr,n,vec,sum,k);

}
int main() {

	ll n,k;
	cin>>n>>k;
	ll arr[n+5];

	vector<ll>vec;
    ll sum=0;
	for(ll i=0;i<n;i++){
        cin>>arr[i];
	}

	solve(0,arr,n,vec,sum,k);

}



