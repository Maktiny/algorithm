#include<stdio.h>



int quick(int a[], int start, int end) {
    int port = a[start];

    while(start < end) {

        while(a[end] >= port && start < end) --end;
        a[start] = a[end];

        while(a[start] < port && start < end) ++start;
        a[end] = a[start];
    }
    a[start] = port;
    return start;
}


void qsort(int a[], int start, int end) {
    if(start >= end) {
        return;
    }
    int mid = quick(a,start, end);
    qsort(a, start, mid - 1);
    qsort(a, mid + 1, end);
}



int main() {
    int a[10] = {1,3,5,67,8,2,22,43,54,33};

    qsort(a, 0, 10);
    for(int i = 0; i < 10; ++i) {
        printf(" %d ", a[i]);
    }
    return 0;
}
