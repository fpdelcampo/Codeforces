// https://codeforces.com/problemset/problem/1829/B
#include <iostream>

int main() {
    int tests;
    std::cin >> tests;
    int bests[tests];
    for(int i=0; i<tests; i++) {
        int best = 0;
        int curr_best = 0;
        int len;
        std::cin >> len;
        int current;
        for(int j=0; j<len; j++) {
            std::cin >> current;
            if(!current) {
                curr_best += 1;
            }
            else {
                curr_best = 0;
            }
            best = std::max(best, curr_best);
        }
        bests[i] = best;
    }
    for(int i=0; i<tests; i++) {
        std::cout << bests[i] << std::endl;
    }
}