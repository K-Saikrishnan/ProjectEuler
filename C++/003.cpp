// Largest Prime Factor

#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
 
int main() {
 	
    unsigned long long number, i, maxPrime = -1;

    cin >> number;

    while(number % 2 ==0) {
    maxPrime = 2;
    number /= 2;
    }

    for(i=3; i<=sqrt(number); i+=2) {
        while(number%i == 0) {
            maxPrime = i;
            number /= i;
        }
    }

    if (number > 2) 
    maxPrime = number;

    cout << maxPrime;

    return 0;
}