#include<bits/stdc++.h>//该头文件中包含了c++的所有头文件

using namespace std;

int main(){
  vector<int> a;
  
  a.insert(a.begin(),1);
  a.insert(a.begin()+ 1,2);
   a.insert(a.begin()+2,3);
  a.insert(a.begin()+3,3);//unordered_set不允许重复，只插入一个3

  unordered_set<int> set(a.begin(), a.end());
  unordered_set<int>::iterator it;
  for(it = set.begin(); it != set.end(); it++){
     cout<<"result is "<<*it<<endl;
    }
  
  string s = "12345";
  reverse(s.begin(),s.begin() + 2);
  cout<<s<<endl;
  cout<<"result is "<<*s.begin()<<endl;
  cout<<"the n'th is  "<<*(s.begin() + 3)<<endl;
  

}
