#include<stdio.h>

int main () {
    int n, count = 0;
    scanf("%d",&n);

    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
            ++count;
        }
        else {
            --n;
            ++count;
        }
    }
    printf("%d\n",count);
    return 0; 
}
