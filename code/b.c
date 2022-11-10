#include<stdio.h>
#include<stdlib.h>
#include<lsxintrin.h>

int main() {
    int a = 300;
    int b = 0;

    asm (
            "ori $r1, $r0, 1 \n\t"
            "b  0x4 \n\t"
            "b  label\n\t"
            "move 0%, $r1 \n\t"
            ".label\n\t"
            : "=r"(b)
            :"g"(a)
            :
            );
    printf("there is a : %d, b : %d", a, b);
    return 0;
}
