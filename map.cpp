#include<bits/stdc++.h>


using namespace std;

int main() {
 unordered_map<int,int>tmp;
 tmp[9] = 2453;
 tmp[2] = 27;
 tmp[5] = 3;
 tmp[4] = 88;
 tmp[3] = 354;


 for(auto it = tmp.begin(), end = tmp.end(); it != end;)
 {

cout<<it->first<<" :  nihao :  "<<it->second<<endl;
 
    //for(int j = 0; j < it->first; ++j)
    //{
         if(it->first == 4)
         {    
             cout<<it->first<<" "<<it->second<<endl;
             it = tmp.erase(it);//删除元素之后，迭代器失效
             //另一种方式   tmp.erase(it++);
              continue;
         }
         else{
             it++;
         }
   //}
}
return 0;
}
