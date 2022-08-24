#include<stdio.h>
#include<assert.h>

char *strcpy(char* strdes, char * strsrc) {
    assert((strdes != NULL) && (strsrc != NULL));

    char * addr = strdes;
    while((*strdes++ = *strsrc++) != '\0');

    return addr;
}

int main() {

    char* src = "sdgdfghthrt";
    char* des;
    strcpy(des,src);
    char ch = ' ';
    for(int i = 0; ch !='\0'; ++i){
        ch = *des;
        des++;
        printf("%c", ch);
    }
    return 0;
}
