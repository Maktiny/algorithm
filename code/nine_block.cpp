#include<bits/stdc++.h>

using namespace std;

vector<vector<int>>ret;
vector<int>path;

bool check(vector<int>& b) {//判断是否符合幻方要求
    int a = b[0] + b[1] + b[2];
    if(a == b[3] + b[4] + b[5]  &&
       a == b[6] + b[7] + b[8]  &&
    
       a == b[0] + b[3] + b[6]  &&
       a == b[1] + b[4] + b[7]  &&
       a == b[2] + b[5] + b[8]  &&
       
       a == b[0] + b[4] + b[8]  &&
       a == b[2] + b[4] + b[6]
        ){
        return true;
    }
    else{
        return false;
    }
}


void dfs(vector<int>& b, vector<bool>& used) {//dfs穷举
    if(path.size() == b.size()) {
        if(check(path)) ret.push_back(path);
        return ;
    }

    for(int i = 0; i < 9; ++i) {
        if(used[i]) continue;
         
        used[i] = true;
        path.push_back(b[i]);
        dfs(b, used);
        used[i] = false;
        path.pop_back();

    }
}

static bool cmp(vector<int>&a, vector<int>&b) {
    int size = a.size();
    for(int i = 0; i < size; ++i) {
        if(a[i] != b[i]) return a[i] < b[i];
    }
    return false;
}

int main() {
    vector<int>b(9,0);
    for(int i = 0; i < 9; ++i) {
        cin>>b[i];
    }
    vector<bool>used(9, false);


    dfs(b,used);



    int size = ret.size();
    cout<<size<<endl;
    sort(ret.begin(), ret.end(), cmp);


    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < 9; ++j) {
            cout<<ret[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}

//6 7 2 1 5 9 8 3 4
