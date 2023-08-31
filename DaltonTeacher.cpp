// https://codeforces.com/problemset/problem/1855/A
#include <iostream>

int main() {
    int tests;
    std::cin >> tests;
    int answers[tests];
    for(int i=0; i<tests; i++) {
        int len;
        std::cin >> len;
        int curr;
        int matches = 0;
        for(int j=0; j<len; j++) {
            std::cin >> curr;
            if(curr==j+1){
                matches+=1;
            }
        }
        if(matches%2) {// there are an odd number of "mismatches"
            answers[i] = matches/2 + 1;
        }
        else {
            answers[i] = matches/2;
        }
    }
    for(int i=0; i<tests; i++) {
        std::cout << answers[i] << std::endl;
    }
}