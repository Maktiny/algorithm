#include<stdio.h>

struct s{
char a[5];
int b;
short c;
};

int main() {
    struct s student;
    printf("%d", sizeof(student));
    return 0;
}
