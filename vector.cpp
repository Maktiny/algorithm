#include<iostream>
#include<vector>

using namespace std;

int main(){
  vector<int> a;
  
  a.insert(a.begin(),1);
  a.insert(a.begin()+ 1,2);
   a.insert(a.begin(),3);
  a.insert(a.begin(),5);
  vector<int>::iterator it;
  for(it = a.begin(); it != a.end(); it++){
     cout<<"result is "<<*it<<endl;
    }


}
