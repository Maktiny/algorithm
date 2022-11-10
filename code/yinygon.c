#include<stdio.h>

void traverse(int **a) {
    for(int i = 0; i < 10; ++i) {
        printf("traverse is %d\n", (*a)[i]);
    }
}

void tr(int* a, int index) {
    if(index == 10) return;
    printf("nina : %d\n",a[index]);
    tr(a, index + 1);
}

void add(int* val) {
    (*val)++;
    printf("          :%d\n",*val);
}


int main() {
    int* b =  (int *) malloc(10 * sizeof(int));
    int** a = (int **) malloc(10 * sizeof(int *));

    for(int i = 0; i < 10; ++i) {
        b[i] = i;
        a[i] = &b[i];
    }
    tr(b,0);
    traverse(&b);
    free(b);
    free(a);

    int value = 0;
    printf("origion is : %d\n", value);
    add(&value);
    printf("current is : %d\n", value);
    return 0;

