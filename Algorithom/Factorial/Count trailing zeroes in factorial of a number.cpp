#include<bits/stdc++.h>
using namespace std;

int findtail(int n)
{
    int cnt=0;
    for(int i=5;n/i>=1;i*=5)
        cnt+=n/i;

    return cnt;
}

int main()
{
    int n;
    cin>>n;
    cout<<findtail(n)<<endl;
}
