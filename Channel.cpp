#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int tests;
    std::cin >> tests;
    int answers[tests];
    for(int i=0; i<tests; i++) {
        int n;
        int a;
        int q;
        std::cin >> n;
        std::cin >> a;
        std::cin >> q;
        char current;
        bool notif[q];
        int sum = 0; 
        for(int j=0; j<q; j++) {
            std::cin >> current;
            if(current=='+') {
                sum+=1;
            }
        }
        if(a >= n || sum >= n) {
            std::cout << "YES" << std::endl;
        }
        else {
            if(sum+a >= n) {
                std::cout << "MAYBE" << std::endl;
            }
            else {
                std::cout << "NO" << std::endl;
            }
        }
    }
}