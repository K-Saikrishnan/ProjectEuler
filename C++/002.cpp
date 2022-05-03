// Sum of Even Fibonacci Numbers

#include <iostream>
using namespace std;

int main()
{

    unsigned long long range;
    cin >> range;

    unsigned long long sum = 0, fa=1, fb=2;

    while (fb <= range) {

    if (fb % 2 == 0)
        sum += fb;

    auto next = fa + fb;
    fa = fb;
    fb = next;
    }

    cout << sum << endl;



  return 0;
}