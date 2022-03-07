#include<bits/stdc++.h>


using namespace std;
 vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ret;
        sort(nums.begin(),nums.end());

        for(int  k = 0; k < nums.size(); k++){

            if(k > 0 && nums[k] == nums[k - 1]){
                continue;
            }

            for(int i = k + 1; i < nums.size(); i++){

                if(i > k + 1 && nums[i] == nums[i - 1]){
                    continue;
                }

                int left = i + 1, right = nums.size() -1;
                while(left < right){
                    int sum = nums[k] + nums[i] + nums[left] + nums[right];
                    
                    if(sum > target) right--;
                    else if( sum < target) left++;
                    else{
                        ret.push_back({nums[k], nums[i], nums[left], nums[right]});

                        while(left < right && nums[left] == nums[left + 1]) left++;
                        while(left < right && nums[right] == nums[right - 1]) right--;
                        left++;
                        right--;
                    }
                }
            }
        }
        return ret;
}

int main(){
  int a[6] ={-1,0,-1,0,-2,2};
  vector<int>b;
  for(int i = 0; i < 6; i++){
    b.push_back(a[i]);
  }

  vector<vector<int>> v = fourSum(b, 0);
  for(int i = 0; i != v.size(); i++){
    for(int j = 0; j != v[0].size(); j++){
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;

}
