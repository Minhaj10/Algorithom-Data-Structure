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
    memset(dp, -1, sizeof(dp));
	int n;
	cin>>n;
	int set[n+5];
	for(ll i=0;i<n;i++){
        cin>>set[i];
	}
	int sum;
	cin>>sum;
	if (isSubsetSum(set, n, sum))
		printf("Found a subset with given sum");
	else
		printf("No subset with given sum");
	return 0;
}
