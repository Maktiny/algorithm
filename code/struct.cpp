#include<stdio.h>

struct A {
    int f(){printf("hello/n", m); }
    int m;
};


int main() {
    A* p;
    p->f();
    return 0;
}
