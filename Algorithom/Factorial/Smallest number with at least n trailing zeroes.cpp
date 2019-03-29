#include<bits/stdc++.h>
using namespace std;
bool cheack(int p,int n){
    int temp=p,cnt=0,f=5;
    while(f<=temp){
        cnt+=temp/f;
        f=f*5;
    }
    return (cnt>=n);

}
int findnum(int n){
    if(n==1)
        return 5;
    int start=0;
    int endd=5*n;
    while(start<endd){
        int mid=(start+endd)>>1;
        if(cheack(mid,n))
            endd=mid;
        else start=mid+1;
    }
    return start;

}
int main()
{
    int n;
    cin>>n;
    cout<<findnum(n)<<endl;
}

