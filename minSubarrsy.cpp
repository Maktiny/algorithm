#include<bits/stdc++.h>

using namespace std;

int minSubArrayLen(int target, int &nums[6]) {
     
        int ret = 1e6;
        for(int i = 0; i < nums.size(); i++){
             int count = 0;
             int sum = 0;
            for(int j = i; j < nums.size(); j++){
                if(sum < target) {
                    sum += nums[j];
                    //count++;
                }
                else if(sum == target){
                    count = j - i + 1;
                    cout<<"fdsfsfs"<<count<<endl;
                    ret = min(ret, count);
                    break;
                }
                else if(sum > target){
                    break;
                }
            }
        }
        return ret;
    }

int main(){
  int a[6] = {2,3,1,2,4,3};
  minSubArrayLen(7, a);
}
