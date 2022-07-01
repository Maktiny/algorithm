#include<stdio.h>

int mod = 2;

int power(int a, int n) {
    if(n == 0) return 1;

    a %= mod;

    if(n % 2 == 1) {
        return (a * power(a, n - 1) % mod);
    }
    else {
        int sub = power(a, n / 2);
        return (sub * sub % mod);
    }
}

int main() {

}
