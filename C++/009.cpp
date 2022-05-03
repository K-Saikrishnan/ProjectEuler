// Special Pythagorean Triplet a+b+c=1000

#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;


int main() {   
    const int MaxVal = 1001;
    vector<int> cache(MaxVal+1, -1);

    for(int a=1; a<MaxVal; ++a)
        for(int b=a; b<MaxVal-a; ++b) {
            int c2 = a*a + b*b;
            int c = sqrt(c2);

            if(c2 != c*c)
                continue;

            else {
                int sum = a + b + c;
                if(sum>MaxVal)
                    break;
            
                if(cache[sum] < a*b*c)
                    cache[sum] = a*b*c;
            }                    
        }

    cout << cache[1000] << endl;
    
    return 0;
}

