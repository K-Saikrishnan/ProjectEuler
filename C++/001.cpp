//Divisible by 3 or 5

#include <iostream>
using namespace std;

// triangular number: sum(x) = 1+2+..+x = x*(x+1)/2
unsigned long long sum(unsigned long long x) {
    return x * (x + 1) / 2;
}

int main()
{
    unsigned long long range;
    cin >> range;

    auto sumThree =  3 * sum(range /  3);
    auto sumFive  =  5 * sum(range /  5);

    auto sumFifteen = 15 * sum(range / 15);


    cout << sumThree + sumFive - sumFifteen << endl;


    return 0;
}