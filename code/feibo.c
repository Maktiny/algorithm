#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int fib(int n){
    //斐波那切数列0, 1, 1，2，3，5
        //int a = 0, b = 1, sum = 0;
        int a[n +1];
        a[0] = 0;
        a[1] = 1;
        a[2] = 1;
        for(int i = 2; i <= n; i++){
            //sum = (a + b );
            a[i] = a[i -1] + a[i- 2];
            //a = b;
            //b = sum;
        }
        return a[n];
          
}

int main() {
    int n = 100000;
    struct timeval start;
    struct timeval end;
    //time_t s, e;
    gettimeofday(&start, NULL);
    
    int ret = fib(n);
    gettimeofday(&end, NULL);
    long timer = 1000000 *(end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
    
    printf("%d\n", ret);
    printf("%ld\n", timer);
    
    return 0;
}
