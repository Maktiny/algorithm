#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    static bool cmp (int a, int b) {
        return a < b;
    }
    
    int solve (vector<int>& num, int size, int &result) {
        if(size == 1) return num[0];
        if(size == 2) return max(num[0], num[1]);
        if(size == 3) return num[0] + num[1] + num[2];
        sort(num.begin(), num.end(), cmp);
        int i = 1;
        for (; i < size ; i++) {
            result += num[i];
        }
        result += (size - 2) * num[0];
        return result;
    }
};

int main (void) {
    int t, i = 0, n, tem;
    cin>>t;
    vector<int>nums;
    for(; i < t; i++){
        cin>>n;
        int result = 0;
        while(n--){
            cin>>tem;
            nums.push_back(tem);
        }
        Solution s;
        s.solve(nums, nums.size(), result);
        nums.clear();
        cout<<result<<endl;
    }
    return 0;
}
