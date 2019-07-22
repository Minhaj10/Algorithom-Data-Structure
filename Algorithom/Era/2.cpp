#include<stdio.h>
int main()
{
    int arr[10000],i,a,b,c,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
            if(arr[i]<0){
        printf("%d ",arr[i]);
    }
    }
    printf("\n");
}


