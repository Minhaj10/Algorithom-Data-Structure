#include<bits/stdc++.h>
using namespace std;
int finddigit(int n)
{
    if(n<0)
        return 0;
    if(n<=1)
        return 1;

    double x=((n*log10(n/M_E)+log10(2*M_PI*n)/2.0));
    return floor(x)+1;
}
int findnum(int n)
{
    int low=0,high=2*n;
    if(n<=0)
        return -1;
    if(finddigit(low)==n){
        return low;
    }
    while(low<=high){
        int mid=(low+high)/2;
        if(finddigit(mid)>=n && finddigit(mid-1)<n)
            return mid;
        else if(finddigit(mid)<n)
            low=mid+1;
        else high =mid-1;
    }
    return low;

}
int main()
{
    int n;
    cin>>n;
    cout<<findnum(n)<<endl;
    return 0;

}
