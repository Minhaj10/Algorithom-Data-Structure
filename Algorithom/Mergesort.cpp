#include<bits/stdc++.h>
using namespace std;

void Merge(int *a ,int *l,int left,int *r,int right){

  int i,j,k;
  i=0;
  j=0;
  k=0;
  while(i<left && j<right){
    if(l[i]<r[j]){
        a[k++]=l[i++];
    }
    else a[k++]=r[j++];
  }
  while(i<left){
    a[k++]=l[i++];
  }
  while(j<right){
    a[k++]=r[j++];
  }
}

void mergesort(int *a ,int n){
    if(n<2) return ;
    int mid,*l,*r;
    mid=n/2;

    l=(int*)malloc(mid*sizeof(int));
    r=(int*)malloc((n-mid)*sizeof(int));

    for(int i=0;i<mid;i++){
        l[i]=a[i];
    }
    for(int i=mid;i<n;i++){
        r[i-mid]=a[i];
    }
    mergesort(l,mid);
    mergesort(r,n-mid);
    Merge(a,l,mid,r,n-mid);

    free(l);
    free(r);
}

int main()
{
    int n,a,b,arr[10000];
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    mergesort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
