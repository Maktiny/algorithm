#include<stdio.h>

int largestSumAfterKNegations(int* nums, int numsSize, int k){
    int min  = 1000, ret = 0;
    for(int i = 0; i < numsSize;i++){
        if(k > 0 && nums[i] < 0){
            nums[i] -= nums[i];
            k--;
        }
        if(nums[i] < min)
            min = nums[i];
        ret += nums[i];
    }
    if( k > 0 && (k % 2 == 1)){
        ret -= min;
    }
    return ret;
}

int main(){
  int nums[3] = {4,2,3};
  printf("result is %d\n",largestSumAfterKNegations(nums, 3,1));
  return 0;
}
