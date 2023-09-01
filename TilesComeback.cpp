// https://codeforces.com/contest/1851/problem/C

#include <iostream>
#include <vector>

int main() {
    int tests;
    std::cin >> tests;
    std::vector<std::string> v;
    for(int i=0; i<tests; i++) {
        int len;
        std::cin >> len;
        int k;
        std::cin >> k;
        int curr;
        int arr[len];
        for(int j=0; j<len; j++) {
            std::cin >> curr;
            arr[j] = curr;
        }
        if(arr[0] == arr[len-1]) {
            int encountered = 0;
            for(int j = 0; j<len; j++) {
                if(arr[j] == arr[0]) {
                    encountered += 1;
                }
            }
            if(encountered>=k) {
                v.push_back("YES");
            }
            else {
                v.push_back("NO");
            }
        }
        else {
            int left = 0;
            int right = len-1;
            int hit_left = 0;
            int hit_right = 0;
            while(left < right) {
                if(arr[0] == arr[left]) {
                    hit_left += 1;
                }
                if(arr[len-1] == arr[right]) {
                    hit_right += 1;
                }
                if(hit_left < k) {
                    left +=1;
                }
                if(hit_right < k) {
                    right -= 1;
                }
                if(hit_left >= k && hit_right >= k) {
                    break;
                }
            }

            if(hit_left >= k && hit_right >= k) {
                v.push_back("YES");
            }
            else {
                v.push_back("NO");
            }
        }
    }
    for(int i = 0; i<tests; i++) {
        std::cout << v[i] << std::endl;
    }
}