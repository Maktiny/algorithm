#include<bits/stdc++.h>

using namespace std;

vector<int>queue;


void push(int value) {
    queue.push_back(value);
}


int pop() {
    if(!queue.empty()) {
        int ret = queue.front();
        auto it = queue.begin();
        queue.erase(it);
        return ret;
    }
    else{
        return 0;
    }
}

int  main() {

}
