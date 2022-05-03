// Sum Square Difference

#include <iostream>
#include <bits/stdc++.h>
#include <string.h>


using namespace std;


int main() {
    unsigned long long int maxi, sumSquare = 0, squareSum =0;

    cin >> maxi;

    sumSquare = (maxi * (maxi+1) * (2*maxi+1)) / 6;
    squareSum = pow(maxi*(maxi+1), 2) / 4;

    cout << squareSum - sumSquare << endl;



    return 0;
}