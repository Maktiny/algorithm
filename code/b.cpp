#include<bits/stdc++.h>

using namespace std;
// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{
    int n;
    cin>>n;
    vector<int>nums;
    string str ;
    getline(cin, str);
    cout<<str<<endl;
    int ret = 0, k = 0;
    int size = str.size();
    for(int i = 1; i < size; ++i) {
       if(isdigit(str[i])){
           ret = ret * 10 + (str[i] - '0');
       }
       else if((str[i] == ',' ) || (str[i] == ']')) {
           nums.push_back(ret);
           ret = 0;
       }
    }
    for(auto it : nums){
        cout<<it<<" ";
    }
    int count = 0;
    
    for(int i = 0; i < n; ++i) {
        int flag = false;
        cout<<nums[i]<<" ";
        for(int j = i + 1; j < n; ++j) {
            if(nums[i] > (nums[j] * 2)) {
                flag = true;
                cout<<nums[i]<<" ";
                break;
            }
        }
        if(flag) {
            ++count;
        }
    }
    cout<<count<<endl;
    return 0;
}
