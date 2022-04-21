#include<stdio.h>


void maopao_sort(int *s, int size){
  int tem = 0;
  
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      if(s[i] < s[j]){
       tem = s[i];
       s[i] = s[j];
       s[j] = tem;
      }
    }
  }

}

void insert_sort(int *nums, int size){
  int tem = 0;
  for(int i = 1; i < size; i++){
    for(int j = i; j > 0; j--){
      if(nums[j] < nums[ j - 1]){
        tem = nums[j];
        nums[j] = nums[j -1];
        nums[j -1] = tem;
      }
    }
  }
}

void select_sort(int *s ,int size){
  int tem = 0, min = 0;
  for(int i = 0; i < size; i++){
    min = i;
    for(int j = i + 1; j < size; j++){
      if(s[j] < s[min]){
        min = j;
      }
    }
    tem = s[i];
    s[i] = s[min];
    s[min] = tem;
  }
}
int main(void){
  int s[10] = {1,3,2,4,6,5,9,8,0,7};
  int s2[10] = {1,2,2,0,1,1,0,2,1,0};
  //maopao_sort(s, 10);
  //insert_sort(s, 10);
  select_sort(s2, 10);
  for(int i = 0; i < 10; i++){
    printf("%d\t", s2[i]);
  }
  return 0;
}
