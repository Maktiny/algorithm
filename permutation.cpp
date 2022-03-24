#include<bits/stdc++.h>

using namespace std;

int main(){
  string s = "abcabcbb";
       int ret = -2;
        unordered_set<char>set;
        for(int i = 0; i < s.size(); i++){
          cout<<s[i]<<endl;
           if(set.find(s[i]) != set.end()){
             int size = set.size();
               ret = ret > size ? ret : size;
               
               cout<<"ret is "<<set.size()<<endl;
               set.clear();
           }
           set.insert(s[i]);
        }
        cout<<ret<<endl;
    return 1;

}
