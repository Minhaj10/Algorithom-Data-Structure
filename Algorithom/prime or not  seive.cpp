#include <iostream>
using namespace std;

int const N = 121;
int is_prime[N];

bool sieve() {

    int i=2;

    while(i*i <= N) {

        if(is_prime[i] == 0) {
            i++;
            continue;
        }
        int j = 2*i;
        while(j < N) {

            is_prime[j] = 0;

            j += i;
        }
        i++;
    }
}

int main() {

    for(int i=0; i<N; i++) {
        is_prime[i] = 1;
    }

    is_prime[0] = 0;
    is_prime[1] = 0;
    sieve();

    for(int i=1; i<N; i++) {
        if(is_prime[i] == 1) {
            cout << i << " ";
        }
    }

    return 0;
}
