#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> s1;
        s1.push(s[0]);
        for(int i = 1; i < s.size(); i++){
            if(!s1.empty() && s[i] == s1.top()) s1.pop();
            else s1.push(s[i]); 
        }
        //string str ="";
        stack<char> s2;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
          //str += s1.top();
          //s1.pop();
        }
        string str;
        while(!s2.empty()){
            str += s2.top();
            s2.pop();
        }
        return str;
    }
};

int main(){
  Solution solution;
  string s = "abbaca";
  string str = solution.removeDuplicates(s);
  cout<<"result is "<<str<<endl;
}
