#include<stdio.h>

int main() {
    for(int i = 0; i < 10000; ++i) {
        asm (
                "x86sub.d %r10, %r9 \n\t" 
                "setx86j %r10, 2 \n\t"
                );
    }
    return 0;
}
