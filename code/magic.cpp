#include<bits/stdc++.h>

using namespace std;

int main() {
    int  n;
    cin>>n;
    string s = "";
    vector<int>num;
    int x = 0;
    for(int i = 0; i < n; ++i) {
      cin>>num[i];
    }
    int flag = false;
    int ret = 0;
    for(int i  = 0; i <= 999; ++i) {
        for(int j = 0 ; j < n; ++j) {
            int tem = num[j] - i;
            if(tem == 32 || (tem >= 65 && tem <= 90)) {
                ++ret;
                x = i;
            }
        }
        if(ret == n) break;
    }
    for(int i = 0; i < n; ++i) {
      s += char(num[i] - x);
    }
    cout<<s<<endl;
    return 0;
}
