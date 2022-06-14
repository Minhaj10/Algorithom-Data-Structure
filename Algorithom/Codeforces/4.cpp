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






}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
    ll n,a,m,b,c,d,k;
    ll track=0;
    ll mx;
    ll point=20,sum=0;
    ll flag=0;
    string s;
    string s1,s2;
    set<int>st;


    cin>>a>>b>>c>>d;

    ll cnt=0;

    if(b>a){
        cnt++;
    }
    if(c>a){
        cnt++;
    }
    if(d>a){
        cnt++;
    }

    cout<<cnt<<endl;
    }

}



