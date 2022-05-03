// Smallest multiple divisible by all of 1-20

#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

unsigned long long lcm(unsigned long long a, unsigned long long b) {
    return (a*b)/gcd(a, b);
}

    int main()
{
    unsigned int maximum, minMulti = 1, i;
    cin>>maximum;


    for(i=2; i<=maximum; ++i) {
        minMulti = lcm(minMulti, i);
    }

    cout << minMulti << endl;



    return 0;
}