#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  /*
  int a = 2;
  int b = 3;
  int c = 4;
  int* x = &a;
  int* y = &b;
  int* z = &c;
  int *p[3] = {x,y,z};
  int **ptr = &p[0];
  printf("result is %d \n",*(*ptr + 1));
  printf("element c addr is  %lx \n",&c);
  printf("zhizhen z value is %lx \n",z);
   printf("zhizhen z addr is %lx \n",&z);
*/
 struct student{
   int name;
   int num;
 };
 struct student st;
 st.name = 12;
 st.num = 324;

 struct student *tb = &st;
 struct student ** trace = &tb;
 printf("st is %d \n",st.name);
 printf("*tb is %d \n",(*tb).name);
 printf("tb is %d \n",tb->name);
  
 printf("trace  %lx, &tb is %lx \n",trace,&tb);
 printf("*trace %d \n",(*trace)->name);
 printf("**trace %d \n",(**trace).name);
 
 int a[5] = {1,2,3,4,5};
 memset(a, 0, sizeof(a));
 for(int i =0; i < 5; ++i){
   printf("%d\n",a[i]);
 }

struct student st2;
st2.name = 77;
st2.num = 11;

struct student *sb = &st2;

*sb = *tb;
printf("%d\n", sb->num);



}
