#include<bits/stdc++.h>


using namespace std;


int qs(int nums[], int start, int end) {
    int port = nums[start];
    while(start < end) {
        while(nums[end] >= port && start < end) --end;
        nums[start] = nums[end];

        while(nums[start] < port && start < end) ++start;
        nums[end] = nums[start];
    }
    nums[start] = port;
    return  start;

}

void quick(int nums[], int start , int end){
    if(start >= end)
         return; //递归出口

    int mid = qs(nums, start, end);
    quick(nums, start, mid - 1);
    quick(nums, mid + 1, end);
}


int main() {
    int nums[10] = { 29,89,54,11,100,234,43,33,54,67};
    quick(nums,0, 9);
    for(auto it : nums){
        cout<<it<<" ";
    }
}
