#include<stdio.h>

int add(int n) {
    int ret = 0;
    for(int i = 0; i <= n; ++i) {
        ret += i;
    }
    return ret;
}

int main() {
    long long ret = 0;
    for(int i = 0; i < 10000; ++i) {
        ret = add(100000);
    }    printf("%lld\n", ret);
    return 0;
}
