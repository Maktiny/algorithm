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
}
