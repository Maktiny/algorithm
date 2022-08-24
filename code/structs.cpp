#include<stdio.h>

struct s{
char a[5];
int b;
short c;
};

//strlen的实现

int strlen(const char* str) {
    int ret = 0;
    while(*str != '\0') {
        ++str;
        ++ret;
    }
    return ret;
}


int main() {
    struct s student;
    printf("%d", sizeof(student));

    

    return 0;
}
