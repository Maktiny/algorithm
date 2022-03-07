#include<bits/stdc++.h>
//https://programmercarl.com/0239.%E6%BB%91%E5%8A%A8%E7%AA%97%E5%8F%A3%E6%9C%80%E5%A4%A7%E5%80%BC.html
using namespace std;

class Solution {

private:
  class MyQueue{
    public:
      deque<int>que;//使用双端队列deque来实现单调队列
// 每次弹出的时候，比较当前要弹出的数值是否等于队列出口元素的数值，如果相等则弹出。
    // 同时pop之前判断队列当前是否为空。
      void pop(int value){
        if(!que.empty() && value == que.front()){
          que.pop_front();
        }
      }
   // 如果push的数值大于入口元素的数值，那么就将队列后端的数值弹出，直到push的数值小于等于队列入口元素的数值为止。
    // 这样就保持了队列里的数值是单调从大到小的了。
      void push(int value){
        while(!que.empty() && value > que.back()){
          que.pop_back();
        }
        que.push_back(value);
      }
// 查询当前队列里的最大值 直接返回队列前端也就是front就可以了
      int front(){
        return que.front();
      }
  };

public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      MyQueue que;
      vector<int> ret;

      for(int i = 0; i < k; i++){
        que.push(nums[i]);
      }
      ret.push_back(que.front());

      for(int i = k; i < nums.size(); i++){
        que.pop(nums[i - k]);
        que.push(nums[i]);
        ret.push_back(que.front());
        cout<<que.front()<<endl;
      }
     return ret;

  }
};

int main(){
  Solution solution;
  int b[8] = {1,3,-1,-3,5,3,6,7};
  vector<int>a;
 for(int i = 0; i < 8; i++){
    a.push_back(b[i]);
  }

  vector<int> ret = solution.maxSlidingWindow(a, 3);

  for(int i = 0; i < ret.size(); i++){
    cout<<ret[i]<<" "<<endl;
  }
}
