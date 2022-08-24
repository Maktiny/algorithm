#include<stdio.h>

int main() {
    int a = 0;

    for(int i = 0; i < 5; ++i) {
        ++a;
        __asm__ __volatile__ (
                "movl %k0, %%eax \n\t" \
                :
                :"g"(a)
                :"%eax"
            );
    }
    printf("there is: %d",a);
    return 0;
    
}
