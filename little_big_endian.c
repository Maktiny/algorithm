#include<stdio.h>

int main() {
    union {
        int a;
        char b;
    } c;
    c.a = 1;
    if(c.b == 1) {
        printf("小端");
    }
    else{
        printf("大端");
    }
    return 0;
}
