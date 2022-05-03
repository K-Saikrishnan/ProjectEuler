// Largest Palindrome Product of two 3-digit NUmbers

#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

unsigned int makePalindrome(unsigned int x) {
    unsigned int result = x * 1000; // abc => abc000
    result += x / 100;              // a.. => a..00a
    result += ((x / 10) % 10) * 10; // .b. => .b.0b.
    result += (x % 10) * 100;       // ..c => ..cc..
    return result;
}

int main() {
    unsigned int maximum, i;
    cin >> maximum;

    bool found = false;

    for (auto upper3 = maximum / 1000; upper3 >= 100 && !found; --upper3) {
        
        auto palindrome = makePalindrome(upper3);

        if (palindrome >= maximum)
            continue;

        for (i = 100; i * i <= palindrome; ++i)
            if (palindrome % i == 0) { 
                auto other = palindrome / i;
                if (other < 100 || other > 999)
                    continue;

                cout << palindrome << endl;
                found = true;
                break;
            }
    }

    return 0;
}