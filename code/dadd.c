#include<stdio.h>

int dadd(int n) {
    
    if(n == 1){
        return n;
    }
    return  dadd(n - 1) + n;
}

int main() {
    long long ret = 0;
    for(int i = 0; i < 10000; ++i) {
        ret = dadd(100000);
    }
    printf("%lld\n", ret);
    return 0;
}
