#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int cases;
    scanf("%d", &cases);
    int ans = 0;
    
    for(int i = 0; i<cases; i++) {
        int i1, i2, i3;
        scanf("%d %d %d", &i1, &i2, &i3);
        
        if(i1+i2+i3>=2) {
            ans=+1;
        }
        printf("\n%d and ans is %d\n", i1+i2+i3, ans);
    }
    printf("\n%d\n", ans);
    return ans;
}
