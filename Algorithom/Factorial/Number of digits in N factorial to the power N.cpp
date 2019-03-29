#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{

    double ans = 0;
    for (int i = 1; i <= n; i++)
        ans += log10(i);


    ans = ans * n;
    return 1 + floor(ans);
}

int main()
{
    int n;
    cin>>n;
    cout << countDigits(n)<<endl;
    return 0;
}
