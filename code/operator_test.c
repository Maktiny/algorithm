#include<stdio.h>

struct Node {
    int a;
};

int fun () {
    struct Node node;

    node.a = 1;

    struct Node* p = &node;
    int a = 10;
    int * b = &a;
    return !!(*b);//取两次反
}

int main() {
    int c = fun();
    printf("%d", c);
    return 0;
}
