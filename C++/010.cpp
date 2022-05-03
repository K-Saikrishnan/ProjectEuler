// Sum of Primes


#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>

using namespace std;


int main() {

    unsigned long long int sumPrimes = 0;
    unsigned int n;

    cin >> n;

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; ++p)
    {
        if (prime[p] == true)
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            sumPrimes += p;

    cout << sumPrimes << endl;

    return 0;
}

