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


    cin>>n;
    ll arr[n+5];
    ll arr1[n+5];


    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }



}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        char arr[8][8];

        for(ll i=0;i<8;i++){
            for(ll j=0;j<8;j++){
                cin>>arr[i][j];
            }
        }

        ll col,row;
        for(ll i=0;i<8;i++){
            for(ll j=0;j<8;j++){
                if(i>0 && j> 0 && arr[i][j]=='#' && arr[i-1][j-1]=='#' && arr[i-1][j+1]=='#' && arr[i+1][j-1]=='#' && arr[i+1][j+1]=='#'){
                   col=i+1;
                   row=j+1;
                   break;
                }
            }

    }

    cout<<col<<" "<<row<<endl;

}
}


