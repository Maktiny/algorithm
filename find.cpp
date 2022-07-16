#include<bits/stdc++.h>


using namespace std;

int main() {
    string s = "vsdsgthrtjrrthjj4567ijnmp";
    string t = "psv";
    int len = t.size();
    for(int i = 0; i < len; ++i) {
        cout<<t[i]<<": posi in s is:"<<s.find(t[i])<<endl;
    }
    return 0;
}
