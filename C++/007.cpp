// nth Prime number

#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main() {
    unsigned int n,i;
    vector<unsigned int> primes;
    
    cin >> n;
    
    primes.reserve(n);
    primes.push_back(2);

    for(i=3; primes.size()<=n-1; i+=2) {
        bool isPrime = true;
        
        for (auto p : primes) {
            if(i%p==0){
                isPrime = false;
                break;
            }
        
            if(p*p > i)
                break;
        }

        if(isPrime)
            primes.push_back(i);
    }

    cout << primes[n-1] << endl;



    return 0;
}