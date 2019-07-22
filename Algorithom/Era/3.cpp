#include<stdio.h>
int main()
{
    int arr[10000],i,a,b,c,n,sum=0,max=0,min=99797979;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Sum = %d\n min = %d\n max %d\n",sum,min,max);
}


