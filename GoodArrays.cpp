// https://codeforces.com/problemset/problem/1856/B
#include <iostream>
#include <unordered_map>

int main() {
    int tests;
    std::cin >> tests;
    int bests[tests];
    for(int i=0; i<tests; i++) {
        std::unordered_map<int, int> encountered; 
        int len;
        std::cin >> len;
        bool hit = false;
        int current;
        for(int j=0; j<len; j++) {
            std::cin >> current;
            
        }
        bests[i] = best;
    }
    for(int i=0; i<tests; i++) {
        std::cout << bests[i] << std::endl;
    }
}