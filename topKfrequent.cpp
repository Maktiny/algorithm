#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    class cmp{
        public:
         bool operator()(pair<int,int>& a, pair<int,int>& b ){
        return a.second > b.second;
     }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }//统计频率

        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pri_queue;
       
       unordered_map<int,int>::iterator it;

       for(it = map.begin(); it != map.end(); it++){//把map元素插入到优先级队列中
           pri_queue.push(*it);
           if(pri_queue.size() > k)//优先级队列的底层实现是堆，维护一个k个元素的小顶堆
              pri_queue.pop();
       }

       vector<int> ret;

       for(int i = k -1; i >= 0;i--){
           ret.push_back(pri_queue.top().first);
           pri_queue.pop();
       }
       return ret;
    }
};

int main(){
  Solution solution;
  int b[6] = {1,1,1,2,2,3};
  vector<int>a;
 for(int i = 0; i < 6; i++){
    a.push_back(b[i]);
  }

  vector<int> ret = solution.topKFrequent(a, 2);

  for(int i = 0; i < ret.size(); i++){
    cout<<ret[i]<<" "<<endl;
  }
}
