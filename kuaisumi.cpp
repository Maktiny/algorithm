#include<bits/stdc++.h>

using namespace std;


int qusumi(int x, int n, int mod) {
    int ret = 1;
    while(n) {
        if(n & 1) ret *= x;

        x *= x;
        n = n >> 1;

    }
    return ret;
}

int main() {
    cout<<qusumi(2, 5, 1);
    return 0;
}
