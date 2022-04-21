#include<stdio.h>

  int getsum(int n){
        int sum = 0;
        while(n){
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }

int main(){
  int a = 11111;
  printf("result is %d\n",getsum(a));

  char array[5] = "hello";
  char* ptr = &array;
  char* p = array;
  struct student{
    const char * name;
    int id;
  };
  struct student student1;
  struct student * st = &student1;
  st->name = array;
  printf("ptr + 3 is %s\n",array);
  printf("ptr + 3 is %s\n",ptr);
  printf("p is %s\n",p);
  printf("st->name is %s\n ",st->name);
}
