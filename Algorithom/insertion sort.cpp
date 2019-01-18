#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int value,hole;
        value=arr[i];
        hole =i;
        while(hole>0 && arr[hole-1]>value){
            arr[hole]=arr[hole-1];
            hole=hole-1;
        }
        arr[hole]=value;
    }
}
int main()
{
    int ar[100],a,b,c,d,n;
    cout<<"Number of Element-->";
    cin>>n;

    for(int i=0;i<n;i++){

        cin>>ar[i];
    }
    insertionsort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
