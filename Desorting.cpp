// https://codeforces.com/problemset/problem/1853/A
#include <iostream>
#include <cstdlib>

int main() {
    int tests;
    std::cin >> tests;
    for(int i=0; i<tests; i++) {
        int len;
        std::cin >> len;
        int arr[len];
        int m = std::numeric_limits<int>::max();
        for(int j=0; j<len; j++) {
            std::cin >> arr[j];
        }
        int b[len-1];
        bool check = false;
        for(int j=1; j<len; j++) {
            b[j] = arr[j]-arr[j-1];
            if(b[j]<0){
                check = true;
                break;
            }
            m = std::min(m, b[j]);
        }
        if(check) {
            std::cout << 0 << std::endl;
        }
        else{
            std::cout << m/2 + 1 << std::endl;
        }
    }
}