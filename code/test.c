#include<stdio.h>

int main() {
    int flag = 0x0080d000;
    int ret = flag  & 0x00100000;
    if(!ret) {
printf(" there is : %d", !ret);
    }
    return 0;
}
