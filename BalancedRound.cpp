// https://codeforces.com/problemset/problem/1850/
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int tests;
    std::cin >> tests;
    int answers[tests];
    for(int i=0; i<tests; i++) {
        size_t len;
        int sep;
        std::cin >> len;
        std::cin >> sep;
        std::vector<int> arr;
        bool hit = false;
        int current;

        for(int j=0; j<len; j++) {
            std::cin >> current;
            arr.push_back(current);
        }
        std::sort(arr.begin(), arr.end());
        int most = 1;
        int block = 1;
        for(int j=1; j<len; j++) {
            if(arr[j]-arr[j-1]<=sep) {
                block+=1;
            }
            else {
                block = 1;
            }
            most = std::max(block, most);
        }
        answers[i] = len-most;
    }
    for(int i=0; i<tests; i++) {
        std::cout << answers[i] << std::endl;
    }
}