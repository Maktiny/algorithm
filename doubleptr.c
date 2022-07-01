#include<stdio.h>


typedef struct student{
    int a[5] ;
} student;



int main() {
    //int a[5] = {1,2,3,4,5};
    student st;
     for(int i  =0 ; i < 5; ++i) {
        st.a[i] = i;
        
    }
    for(int i  =0 ; i < 5; ++i) {
        printf("%d\n", st.a[i]);
        
    }
    //free((void *)st);
    return  0;
}
