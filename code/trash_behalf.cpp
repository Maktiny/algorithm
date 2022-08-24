#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++ (C++14 (g++ 6.2.0))
    int sum = 0;
    int size = A.size();
    vector<double> num;
    for(int i = 0; i < size; ++i) {
        sum += A[i];
        num.push_back(A[i]);
    }
    double mid = sum / 2.0;
    int ret = 0;
    double des = sum;
    cout<<des<<endl;
    sort(num.begin(), num.end(), greater<double>());
    for(int i = 0; i < size; ++i) {
            cout<<num[i]<<" ";
        }
    cout<<endl;
    while((des - mid) > 0.1) {
        num[0] = num[0] / 2.0;
        ++ret;
        //cout<<"FDSGSDGSD";
        des = 0.0;
        for(int i = 0; i < size; ++i) {
            des += num[i];
        }
        //cout<<des<<endl;
        sort(num.begin(), num.end(),greater<double>());
    }

    cout<<ret;
    return ret;
}

int main() {
    vector<int>a ({5,19,8,1});
    solution(a);
    return 0;
}
