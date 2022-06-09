#include<bits/stdc++.h>

using namespace std;

string Palindrome(string s, int l, int r) {
        int size = s.size();
        while(l >=0 && r < size && s[l] == s[r]) {
            --l;
            ++r;
        }
        cout<<s.substr(l+1, r - l - 1)<<endl;
        return s.substr(l+1, (r - 1) - (l + 1) + 1);
    }
    string longestPalindrome(string s) {
        string ret = "";
        int size = s.size();

        for(int i = 0; i < size - 1; ++i) {
            string str1 = Palindrome(s, i,i);

            string str2 = Palindrome(s, i, i + 1);

            ret = ret.size() > str1.size() ? ret : str1;
            ret = ret.size() > str2.size() ? ret : str2;
            
        }
        return ret;
}

int main() {
    string s = "babad";
    string ret = longestPalindrome(s);
    cout<<ret<<endl;
    return 0;
}
