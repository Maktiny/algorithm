#include<bits/stdc++.h>//该头文件中包含了c++的所有头文件

using namespace std;
vector<vector<int>> findContinuousSequence(int target) {
        vector<int>path;
        vector<vector<int>> ret;
        int sum = 0;
        
        for(int i = 1; i < target; i++){
            sum = 0;
            path.clear();
            for(int j = i; j < target; j++){
                path.push_back(j);
                sum += j;
               if(sum == target){
                  ret.push_back(path);
                  for(vector<int>::iterator it = path.begin(); it < path.end();it++)
                       cout<<*it<<endl;
                  if(j == 8) cout<<"vsdv   "<<j<<"  vds"<<endl;
                  path.clear();
                  sum = 0;
                }
                if(sum > target) break;
            }
        }
        return ret;
    }
int main(){
  vector<int> a;
  vector<int>treeB;
  treeB.insert(treeB.begin(),3);
  a.insert(a.begin(),1);
  a.insert(a.begin()+ 1,2);
  a.insert(a.begin()+2,3);
  a.insert(a.begin()+3,4);//unordered_set不允许重复，只插入一个3
int  j = 0;
        int i = a.at(treeB[0]);
        cout<<"i is"<<i<<endl;
        while(i < a.size() && j < treeB.size()){
            if(a[i++] != treeB[j++]) cout<<"ddddd"<<endl;
        }
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
  
  findContinuousSequence(15);
  double s4 = sqrt(4);
  bool l;
  if(s4 == 2.0)
      l =true;
  cout<<l<<endl;
  //cout<<sqrt(5)<<endl;
  //
  //
  string str = "abcdefg";
  str =str +  "g";
  cout<<"sssssss: "<<str<<endl;
}
