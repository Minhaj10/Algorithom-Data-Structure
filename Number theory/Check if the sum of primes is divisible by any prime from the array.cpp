#include <bits/stdc++.h>
using namespace std;


void SumDivPrime(int A[], int n)
{
    int max_val = *(max_element(A, A + n)) + 1;

    vector<bool> prime(max_val + 1, true);


    prime[0] = false;
    prime[1] = false;
    for (int p = 2; p * p <= max_val; p++) {


        if (prime[p] == true) {


            for (int i = p * 2; i <= max_val; i += p)
                prime[i] = false;
        }
    }

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        if (prime[A[i]])
            sum += A[i];
    }

    for (int i = 0; i < n; ++i) {
        if (prime[A[i]] && sum % A[i] == 0) {
            cout << "YES";
            return;
        }
    }

    cout << "NO";
}

int main()
{
    int A[100000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    SumDivPrime(A, n);

    return 0;
}
