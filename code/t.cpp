#include<bits/stdc++.h>

using namespace std;
// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.

int main()
{
    int n;
    cin>>n;
    vector<int>nums(n, 0);
    for(int i = 0; i < n; ++i) {
        cin>>nums[i];
    }
    int count = 0;
    
    for(int i = 0; i < n; ++i) {
        int flag = false;
        for(int j = i + 1; j < n; ++j) {
            if(nums[i] > nums[j] * 2) {
                flag = true;
                break;
                cout<<1<<endl;
            }
        }
        if(flag) {
            ++count;
        }
    }
    cout<<count<<endl;
    return 0;
}
