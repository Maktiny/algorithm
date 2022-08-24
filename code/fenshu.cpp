
#include<bits/stdc++.h>
using namespace std;

static int ret;

void add(int a, int b, int c, int d, long& s, long& m) {
    s += a*d + b*c;
    m += b*d;
}
void des(int a, int b, int c, int d, long& s, long& m) {
    s -= a*d + b*c;
    m -= b*d;
}

void backtrace(vector<int>& x, vector<int>& y, vector<bool>& used, long s, long m, int start) {
    if(s > m) return ; 
    if(s == m) {
        ++ret;
        ret %= 1000000007;
        return ;
    }

    int size = x.size();

    for(int i = start; i < size - 1; ++i) {
        if(used[i]) continue;

        add(x[start], y[start], x[i+ 1], y[i +1], s,m);
        used[i] = true;
        backtrace(x, y, used, s, m, i +1);

        des(x[start], y[start], x[i + 1], y[i + 1], s,m);
        used[i] = false;
    }
}

int solution(vector<int> &X, vector<int> &Y) {
    // write your code in C++ (C++14 (g++ 6.2.0))
    int size = X.size();
    vector<bool>used(size, false);
    //long s = 0, m = 0;
    
    for(int i = 0; i < size; ++i) {
        used[i] = true;
        long s = 0, m = 0;
        backtrace(X,Y, used, s, m, i);
        used[i] = false;
        cout<<i<<endl;
    }
    //backtrace(X,Y, used, s, m, 0);
    cout<<"fsdf";
    cout<<ret<<endl;
    return ret;
}

int main() {
    ret = 0;
    vector<int>x({1,1,2});
    vector<int>y({3,2,3});
    solution(x,y);
    return 0;
}
