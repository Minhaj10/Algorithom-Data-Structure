#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(q) (q).begin(),(q).end()
#define pi acos(-1)
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fore(i,a,b) for (i=a;i<b;i++)
const int mod=1e6;

//Author : @minhaj ahmed

vector<pair<int,int>>adj;
vector<int>vec[100005];
map<pair<int,int>,int>mp;

int visited[100005];

int h, m, hh, mm;
const int N=10000;
const int MAX = 1e7;


ll gcd(ll a, ll b)
{
    return b?gcd(b,a%b):a;
}
bool isVowel(char a)
{
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return true;
    return false;
}

void dfs(int node,int edge)
{

    visited[node]=1;

    for(auto child: vec[node])
    {
        if(visited[child]== 0)
        {

            dfs(child,edge);
        }
    }

}


void solve()
{

    ll n,a,m,b,c,d,k;
    ll track=0;
    ll mx;
    ll point=20,sum=0;
    ll flag=0;
    string s;
    string s1,s2;
    set<int>st;
    deque<int>dq;


    cin>>n;
    ll arr[n+5];
    ll arr1[n+5];

   map<int,int>mp;
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
        mp[arr[i]%10]++;
    }

    if(mp[1]>=3){
        cout<<"YES"<<endl;
    }
    else if(mp[2]>=1 && mp[1]>=1 && mp[0]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[3]>=1 && mp[0]>=2){
        cout<<"YES"<<endl;
    }
    else if(mp[9]>=1 && mp[1]>=1 && mp[3]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[9]>=1 && mp[2]>=2){
        cout<<"YES"<<endl;
    }
    else if(mp[9]>=1 && mp[3]>=1 && mp[1]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[9]>=1 && mp[4]>=1 && mp[0]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[8]>=1 && mp[5]>=1 && mp[0]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[8]>=1 && mp[4]>=1 && mp[1]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[8]>=1 && mp[3]>=1 && mp[2]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[7]>=1 && mp[6]>=1 && mp[0]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[7]>=1 && mp[5]>=1 && mp[1]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[7]>=1 && mp[4]>=1 && mp[2]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[7]>=1 && mp[3]>=2){
        cout<<"YES"<<endl;
    }
    else if(mp[6]>=2 && mp[1]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[6]>=1 && mp[4]>=1 && mp[3]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[6]>=1 && mp[2]>=1 && mp[5]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[5]>=1 && mp[4]>=2){
        cout<<"YES"<<endl;
    }
    else if(mp[5]>=1 && mp[7]>=1 && mp[1]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[5]>=1 && mp[6]>=1 && mp[2]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[5]>=2&& mp[3]>=1){
        cout<<"YES"<<endl;
    }

    else if(mp[5]>=1 && mp[4]>=2){
        cout<<"YES"<<endl;
    }
    else if(mp[6]>=1 && mp[8]>=1 && mp[9]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[9]>=2 && mp[5]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[7]>=2 && mp[9]>=1){
        cout<<"YES"<<endl;
    }
    else if(mp[8]>=2 && mp[7]>=1){
        cout<<"YES"<<endl;
    }

    else if(mp[2]>=2 && mp[9]>=1){
        cout<<"YES"<<endl;
    }



    else cout<<"NO"<<endl;






}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
        solve();

}



