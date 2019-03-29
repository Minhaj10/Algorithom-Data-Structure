#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll n;
    int t;
    cin >> t;
    while(t--)
    {
        cin  >> n;
        if (n == 0 || n == 1)
            cout << "0001" << endl;
        else if(n <= 20)
        {
            ll fact = 1;
            for(int i = 1; i <= n; i++)
            {
                fact = fact * i;
                fact %= 10000;
            }
            printf("%.4lld\n", fact);
        }
        else
        {
            cout << "0000" << endl;
        }
    }
    return 0;

}
