#include<bits/stdc++.h>

using namespace std;

vector<int>que;


void push(int value) {
    que.push_back(value);
}


int pop() {
    if(!que.empty()) {
        int ret = que.front();
        auto it = que.begin();
        que.erase(it);
        return ret;
    }
    else{
        return 0;
    }
}

int  main() {
    push(3);
    push(4);
    push(84);
    pop();
    for(auto it = que.begin(), end = que.end(); it != end; ++it) {
        cout<<*it<<endl;
    }
    return 0;
}
