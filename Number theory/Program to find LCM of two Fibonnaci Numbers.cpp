#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000;

int f[MAX] = { 0 };


int fib(int n)
{

    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);


    if (f[n])
        return f[n];

    int k = (n & 1) ? (n + 1) / 2 : n / 2;

    f[n] = (n & 1) ? (fib(k) * fib(k) + fib(k - 1) * fib(k - 1))
                   : (2 * fib(k - 1) + fib(k)) * fib(k);

    return f[n];
}


int gcd(int a, int b)
{
    if (a == 0)
        return b;

    return gcd(b % a, a);
}

int findLCMFibonacci(int a, int b)
{
    return (fib(a) * fib(b)) / fib(gcd(a, b));
}


int main()
{
    int a = 3, b = 12;

    cout << findLCMFibonacci(a, b);

    return 0;
}
