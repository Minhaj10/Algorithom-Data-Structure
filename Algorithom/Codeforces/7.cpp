#include<stdio.h>
int main()
{
    int arr[10000],arr2[10000],i,a,b,c,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }

}




