#include<stdio.h>
//c中空的strcut的大小是0
struct node{

};

int main() {
    printf("%d",sizeof(struct node));
    return 0;
}
