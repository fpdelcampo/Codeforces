// https://codeforces.com/contest/1856/problem/A
#include <iostream>
#include <cstdlib>
#include <unordered_map>

int main() {
    int tests;
    std::cin >> tests;
    int bests[tests];
    for(int i=0; i<tests; i++) {
        int len;
        int current;
        std::cin >> len;
        int a[len];
        int ops = 0;
        bool sorted = true;
        int m = std::numeric_limits<int>::min();
        for(int j=0; j<len; j++) {
            std::cin >> current;
            a[j] = current;
        }
        for(int j=1; j<len; j++) {
            if(a[j]<a[j-1]) {
                sorted=false;
            }
        }
        if(!sorted) {
            for(int j=0; j<len; j++) {
                for(int k=0; k<j; k++) {
                    if(a[k]>a[j]) {
                        m = std::max(m, a[k]);
                    }
                }
            }
            bests[i] = m;
        }
        else {
            bests[i] = 0;
        }
    }
    for(int i=0; i<tests; i++) {
        std::cout << bests[i] << std::endl;
    }
}