#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int strlen = 5;
    char *str = (char *) malloc(strlen*(sizeof(char)));
    char ch;
    int num = 0;
    do{
        ch = getchar();
        ++num;
        if(num >= strlen){
            strlen = num;
            str = (char *) realloc(str , (strlen) *(sizeof(char)));
        }

        str[num - 1] = ch;
    } while(ch != '\n');
    int count;
    scanf("%d",&count);
    char res[count];
    for(int i = 0; i < count; ++i) {
        if(i >= num) {
            res[i] = '\0';
        }
        else{
            res[i] = str[i];
        }
    }
    printf("str :%s\n",str);
    for(int i = 0; i < count; ++i) {
        printf("%c",res[i]);
    }
    printf("\n");
    return 0;
}
