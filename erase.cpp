/*
#include<bits/stdc++.h>

using namespace std;

int main() {
    string s = "abcdefghijk";
    
    for(auto i = s.begin(), end = s.end(); i != end; ++i){
        if(*i == 'a'){
            s.erase(i);//迭代器
            cout<<*i<<endl;
        }
    }
    cout<<s<<endl;
}
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    unordered_map<char, int>map;
    string str ;
    while(cin>>str) {
        map.clear();
        int size = str.size();
        for (int i = 0; i < size; ++i){
            map[str[i]]++;
        }
        int min_count = 50;
        for(auto it = map.begin(), end = map.end(); it != end; ++it) {
            min_count = min(min_count, it->second);
        }
        string ret = "";
        for(auto i = 0; i < size; ++i) {
            
            if(map[str[i]] != min_count) {

                ret += str[i];
            }
        }
        cout<<ret<<endl;
    }
    return 0;
}
