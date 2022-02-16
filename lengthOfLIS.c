#include<stdio.h>
#include<stdlib.h>
int lengthOfLIS(int* nums, int numsSize){
    int * dp = (int *)malloc(numsSize * sizeof(int));
    int ret = 1;
        for (int i = 0; i < numsSize; i++) {
            dp[i] = 1;
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    dp[i] = dp[i] > (dp[j] + 1) ? dp[i] : (dp[j] + 1);
                }
            }
            if (dp[i] > ret) {
                ret = dp[i];
            }
        }
        return ret ;
}
