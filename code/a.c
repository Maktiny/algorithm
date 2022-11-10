/* JSK-4 简单斐波那契 */
 
#include <stdio.h>
#include <string.h>
 
#define N 50
int f[N + 1];
 
int fib(int n)
{
    if(f[n])
        return f[n];
    if(n == 0)
        return 0;
    else if(n == 1)
        return f[n] = 1;
    else {
        if(!f[n - 1])
            f[n - 1] = fib(n - 1);
        if(!f[n - 2])
            f[n - 2] = fib(n - 2);
        return  f[n] = f[n - 1] + f[n - 2];
    }
}
 
int main()
{
    memset(f, 0, sizeof(f));
 
    int n = 0;
    //scanf("%d", &n);
    printf("%d\n", fib(n));
    printf("%c\n", 1 - '0');
    return 0;
}
