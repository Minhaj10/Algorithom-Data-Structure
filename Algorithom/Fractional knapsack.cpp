#include<bits/stdc++.h>
using namespace std;
struct item{
  double value,wt;
};
bool compare(item a,item b){
     double r1=a.value/a.wt;
     double r2=b.value/b.wt;
     return (r1>r2);
}
double knapsack(item a[],int n,int w)
{
double    currentwt=0;
    double finalvalue=0;
    sort(a,a+n,compare);
    for(int i=0;i<n;i++){
        if((currentwt+a[i].wt)<=w){
            currentwt+=a[i].wt;
            finalvalue+=a[i].value;
        }
        else{
            double remaining=w-currentwt;
            double unit=a[i].value/a[i].wt;
            finalvalue+=(remaining*unit);
            break;
        }
}
    return finalvalue;
}
int main(){
    item a[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].value;
        cin>>a[i].wt;
    }
    int w;
    cin>>w;
    cout<<knapsack(a,n,w)<<endl;
    return 0;

}
