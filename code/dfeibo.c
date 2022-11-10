#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int a[1000009];

int dfib(int n ){
    if(a[n]) return a[n];
    if(n == 0) return 0;
    else if(n == 1) return a[n] = 1;
    else {
        if(!a[n-1]) a[n-1] = dfib(n - 1);
        if(!a[n-2]) a[n-2] = dfib(n - 2);
       
        return a[n-1] + a[n-2];
    }
}

int main() {
    int n = 100000;
    struct timeval start;
    struct timeval end;
    
    gettimeofday(&start, NULL);
    long ret = dfib(n);
    gettimeofday(&end, NULL);
    long timer = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;

    printf("%ld\n", ret);
    printf("%ld\n", timer);
    return 0;
}
