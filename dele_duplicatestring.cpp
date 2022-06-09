#include<bits/stdc++.h>

using namespace std;

 string removeDuplicateLetters(string s) {
        unordered_map<char,int>map;
        vector<bool>visted(26, 0);
        stack<char>st;
        for(auto it: s){
            map[it]++;
        }

        for(auto it : s){
            
            if(visted[it - 'a']){
                map[it]--;
                continue;
            }

            while(!st.empty() && st.top() > it && map[st.top()] > 0){
                visted[st.top() - 'a'] = 0;//出栈，没有访问过
                cout<<st.top()<<' '<<visted[it - 'a']<<endl;
                st.pop();
                
            }
            st.push(it);
            cout<<it<<endl;
            visted[it - 'a'] = 1;
            map[it]--;
        }
        string ret;
        while(!st.empty()){
            char ch = st.top();
            st.pop();
            ret.push_back(ch);
        }
        return ret;
   }

int main(){
    string s = "bcabc";
    string ret = removeDuplicateLetters(s);
    cout<<ret<<endl;
}
