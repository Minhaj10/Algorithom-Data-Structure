#include<bits/stdc++.h>
using namespace std;


const int MOD = 100000007;

int coins[1003];
int index[100000];

int main()
{
    int t;
    scanf("%d", &t);

    for(int a = 1; a <= t; ++a) {
        int n, k;
        scanf("%d %d", &n, &k);

        for(int i = 0; i < n; ++i) scanf("%d", coins+i);

        fill(index, index+k+1, 0);
        index[0] = 1;

        for(int i = 0; i < n; ++i) {
            for(int j = 1; j <= k; ++j) {
                if(coins[i] <= j) {
                    index[j] += index[j - coins[i]];
                    if(index[j] >= MOD) index[j] %= MOD;
                }
            }
        }

        printf("Case %d: %d\n",a, index[k]);
    }

    return 0;
}
