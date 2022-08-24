#include<stdint.h>

void foo();

void bar()
{
    uint64_t *addr = (uint64_t *)foo;
    addr  = addr + sizeof(int);
    *addr = 0;
}

void foo()
{
    int a = 3;
    ++a;
    a = a * a;

    bar();
}

int main()
{
    foo();
    return 0;
}
