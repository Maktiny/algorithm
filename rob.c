#include<stdio.h>

int rob(int* nums, int numsSize){
    int n = 0, m = 0, i = 0, j = 1;

    while(i < numsSize){
        n += nums[i];
        i = i+2;
    }
    while(j < numsSize){
        m += nums[j];
        j += 2;
    }
    return n > m ? n : m;
}

int main() {
  int a[4] = {1,2,3,1};
  int re = rob(a,4);
  printf("result is %d\n",re);
  return 0;
}
