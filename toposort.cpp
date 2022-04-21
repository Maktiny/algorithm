#include<bits/stdc++.h>

using namespace std;

vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        //拓扑排序(有向无环图)
        unordered_map<int,vector<int>>grap;//邻接表存储图
        vector<int>indegress(numCourses, 0);
        for(auto &pre : prerequisites){
            grap[pre[1]].push_back(pre[0]);
            indegress[pre[0]]++;
        }

        vector<int>result;
        queue<int>que;
        for(int i = 0; i < indegress.size(); i++){
            if(indegress[i] == 0){
                que.push(i);
            }
        }

        while(!que.empty()){
            int it = que.front();
            que.pop();
            result.push_back(it);

            for(auto &node : grap[it]){
                indegress[node]--;
                if(indegress[node] == 0) que.push(node);
            }
        }
        if(result.size() != numCourses) return {};
        else return result;
}

int main(){
   int num = 4;
   vector<vector<int>>course;
   course.push_back({1,0});
 course.push_back({2,0});
 course.push_back({3,1});
 course.push_back({3,2});
   vector<int>ret;
   ret = findOrder(num, course);
   printf("the toposort is: ");
   for(int i = 0; i < ret.size(); i++){
     printf("%d\t", ret[i]);
   }
   vector<int>result(ret);
 for(int i = 0; i < result.size(); i++){
     printf("%d\t", result[i]);
   }
 string s = to_string(-121);
 cout<<"integer change to string is "<<s<<endl;
}
