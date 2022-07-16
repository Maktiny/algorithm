#include<stdio.h>
#include<string.h>


struct student {
    int id[3];
    int num;
} student;

int main() {
    struct student *st = (struct student *) malloc(sizeof(struct student));
    memset(st, 0, sizeof(st));

    printf("id :%d\n", st->id[1]);
    printf("num: %d\n", st->num);

}
