#include<stdio.h>

int removeElement(int* nums, int numsSize, int val){
    //  int size = numsSize; //暴力解法
    //     for (int i = 0; i < size; i++) {
    //         if (nums[i] == val) { // 发现需要移除的元素，就将数组集体向前移动一位
    //             for (int j = i + 1; j < size; j++) {
    //                 nums[j - 1] = nums[j];
    //             }
    //             i--; // 因为下标i以后的数值都向前移动了一位，所以i也向前移动一位
    //             size--; // 此时数组的大小-1
    //         }
    //     }
    //     return size;

    int slow = 0;

    for(int fast = 0; fast < numsSize; fast++){
        if(nums[fast] != val){
            nums[slow++] = nums[fast];
        }
        printf("fast: %d, slow:%d",fast,slow);
    }
    return slow;

}

int main(){
  int a[4] = {3,2,2,3};
  int b = removeElement(a,4,3);

}
