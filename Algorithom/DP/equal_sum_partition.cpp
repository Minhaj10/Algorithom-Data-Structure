#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[1000][1000];
int isSubsetSum(int set[], int n, int sum)
{

	if (sum == 0)
		return 1;
	if (n <= 0)
		return 0;
    if(dp[n-1][sum]!= -1){
        return dp[n-1][sum];
    }

	if (set[n - 1] > sum)
		return dp[n-1][sum]=isSubsetSum(set, n - 1, sum);
    else
	return dp[n-1][sum]=isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
}


int main()
{
	int n;
	cin>>n;
	int set[n+5];
	int sum=0;
	for(ll i=0;i<n;i++){
        cin>>set[i];
        sum+=set[i];
	}
	    memset(dp, -1, sizeof(dp));

    if(sum%2==1){
        cout<<"NOT found"<<endl;
    }
    else{
            sum/=2;
	if (isSubsetSum(set, n, sum))
		printf("Found a EQUAL subset partition ");
	else
		printf("Not found");
    }
	return 0;
}

