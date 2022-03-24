#include<bits/stdc++.h>

using namespace std;


  int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0, ret = 0;
        unordered_set<char>set;
        int flag = 0;
        while(end < s.size()){
           
            if(end > start && set.count(s[end]) == 1){
                ret = max(ret, end - start);
                cout<<"ret is start"<<start<<" end: "<<end<<" : "<<ret<<endl;
                set.erase(s[start]);
                start++;
                flag = 1;
              
                continue;
            }
            flag = 0;
            set.insert(s[end]);
            end++;
        }
        //if(!flag) ret = max(ret, end - start );
        return ret;
    }

int main(){
  string s = "pwwkew";
  int a = lengthOfLongestSubstring(s);
  return 0;
}
