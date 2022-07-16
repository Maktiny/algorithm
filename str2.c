#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int strlen = 5;
    char *str = (char *) malloc(strlen * sizeof(char));
    int num = 0;
    char ch;
    do{
        ch = getchar();
        ++num;
        if(num >= strlen) {
            strlen = num;
            str = (char *) realloc(str, strlen * sizeof(char));
        }
        str[num - 1] = ch;
    } while(ch != '\n');

    int count;
    scanf("%d", &count);
    char ret[count];
    for(int i = 0; i < count; ++i) {
        if(i > num){
            ret[i] = '\0';
        }
        else {
            ret[i] = str[i];
        }
    }
    for(int i = 0; i < count; ++i) {
        printf("%c", ret[i]);
    }
    return 0;
}
