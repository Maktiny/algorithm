#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
    vector<int>path;
    public:
    void backtrace(int n ,int m, int start){
        if(path.size() == m){
            for(auto tem : path){
                cout<<tem<<" ";
            }
            cout<<endl;
            return;
        }
        int i = start;
        for(; i <= n; i++){
            path.push_back(i);
            backtrace( n,  m, i + 1);
            path.pop_back();
        }
    }
};

int main (void) {
    int n,m;
    cin>>n>>m;
    Solution s;
    s.backtrace( n,  m, 1);
    return 0;
}
