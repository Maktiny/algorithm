## 基本的数据结构

### 杂项
1. new/delete是C++的操作符，而malloc/free是C中的函数。
2. new做两件事，一是分配内存，二是调用类的构造函数；同样，delete会调用类的析构函数和释放内存。而malloc和free只是分配和释放内存。
3. new建立的是一个对象，而malloc分配的是一块内存；new建立的对象可以用成员函数访问，不要直接访问它的地址空间；
malloc分配的是一块内存区域，用指针访问，可以在里面移动指针；new出来的指针是带有类型信息的，而malloc返回的是void指针。
4. new/delete是保留字，不需要头文件支持；malloc/free需要头文件库函数支持。
### C 常用语法
```
1. 字符串数 char s[2] = "ss"; //c语言没有字符串类型
2. char *p = s;
3. strlen(p) //计算字符串s的长度
```
### 介绍几个比较有用的函数：

* isalpha ：判断一个字符是否为字母，如果是则返回true，否则返回false；
* isdigit : 判断一个字符是否表示数字，如果是则返回true，否则返回false；
* isalnum : 判断一个字符是否表示数字或者字母，如果是则返回true，否则返回false;
* islower : 判断一个字符是否为小写字母，如果是则返回true，否则返回false;
* isupper : 判断一个字符是否为大写字母，如果是则返回true，否则返回false；
* tolower : 若字符为字母则转化为小写字母；
* toupper : 若字符为字母则转化为大写字母；


### c++常用语法
C++中map、set、multimap，multiset的底层实现都是平衡二叉搜索树，所以map、set的增删操作时间时间复杂度是logn，
注意我这里没有说unordered_map、unordered_set，unordered_map、unordered_map底层实现是哈希表
```
string s = to_string(int a) int 转 string

int a = stoi(string s)  string 转int

static bool cmp(vector<int>& a, vector<int>& b){
            return a[1] < b[1]; //按右边界排序
    }
sort(intervals.begin(), intervals.end(), cmp);//按起点排序
string a = s.substr(0,5);     //获得字符串s中从第0位开始的长度为5的字符串

vector<vector<int>> a;//二维数组
a.push_back({1,2});//添加元素到末尾
a.pop_back() //删除末尾元素

```

### C++ map
![2022-02-28 14-23-11 的屏幕截图.png](http://tva1.sinaimg.cn/large/0070vHShly1gzt7gas6eyj30lu0ak79t.jpg)
* [参考](https://www.coonote.com/cplusplus-note/cpp-map-usage-summary.html)
```
// 定义一个map对象
map<int, string> mapStudent;

// 第一种 用insert函數插入pair
mapStudent.insert(pair<int, string>(000, "student_zero"));
 
// 第二种 用insert函数插入value_type数据
mapStudent.insert(map<int, string>::value_type(001, "student_one"));

// 第三种 用"array"方式插入//不能插入key相同的元素，key唯一
mapStudent[123] = "student_first";
mapStudent[456] = "student_second";

// find 返回迭代器指向当前查找元素的位置否则返回map::end()位置
iter = mapStudent.find("123");
 
if(iter != mapStudent.end())
       cout<<"Find, the value is"<<iter->second<<endl;//迭代器才使用->
else
   cout<<"Do not Find"<<endl;

//迭代器刪除
iter = mapStudent.find("123");
mapStudent.erase(iter);
 
//用关键字刪除
int n = mapStudent.erase("123"); //如果刪除了會返回1，否則返回0
 
//用迭代器范围刪除 : 把整个map清空
mapStudent.erase(mapStudent.begin(), mapStudent.end());
//等同于mapStudent.clear()

//插入的数据量
int nSize = mapStudent.size();
//key 的获取mapStudent.first
//value的获取mapStudent.second

```
### C++ unordered_set
![2022-02-28 14-14-45 的屏幕截图.png](http://tva1.sinaimg.cn/large/0070vHShly1gzt7b2vnnij30l50ahq7w.jpg)
![2022-02-28 14-26-06 的屏幕截图.png](http://tva1.sinaimg.cn/large/0070vHShly1gzt7jyx6jaj30k90d3dph.jpg)


### C++ 的vector

```
vector<int>ret(n+1, 0);//之后ret.push_back(),是在n+1的后面追加

像上面这样声明之后，push_back是在n+1之后追加


vector<vector<int>> matrix(m);
    for(int i=0; i!=matrix.size(); i++)
        matrix[i].resize(n);
      //vector的初始化
     vector<int> myvector{ 1, 2, 3, 4, 5 };

    // 二维数组打印
    for(int i=0; i!=matrix.size();i++)
    {
        for(int j=0; j!=matrix[0].size();j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
  
```

### C++ stack
![2022-03-01 14-25-43 的屏幕截图.png](http://tva1.sinaimg.cn/large/0070vHShly1gzud5poju5j30k505xn0q.jpg)
* top()是取栈顶元素，不会删除里面的元素，返回栈顶的引用；
* pop()是删除栈顶元素，返回void。
```
stack<int> s;
int a = s.top();
s.pop();

 stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
     
         stack.pop();
    stack.pop();
 
    while (!stack.empty()) {
        cout << ' ' << stack.top();
        stack.pop();
    }



class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        vector<int> ret(nums.size(), -1);
       //单调栈寻找右边更大的第一个元素。
        stack<int> sk; //用栈来存储元素下标
         //循环数组的处理       
        for(int i = 0; i < nums.size() * 2; i++){
            while(!sk.empty() && nums[i % nums.size()] > nums[sk.top()]){
                ret[sk.top()] =  nums[i % nums.size()];
                sk.pop();
            }
            sk.push(i % nums.size());
        }
        return ret;

    }
};
```

### C++ queue
![2022-03-01 14-58-18 的屏幕截图.png](http://tva1.sinaimg.cn/large/0070vHShly1gzue31bllwj30u3089dn1.jpg)
![2-1P913113140553.jpg](http://tva1.sinaimg.cn/large/0070vHShly1gzue4dtbrhj30jg05uq3i.jpg)

### C++ deque 双端队列
* C++中deque是stack和queue默认的底层实现容器
* deque是可以两边扩展的，而且deque里元素在内存中并不是严格的连续分布的
![2022-03-02 10-36-08 的屏幕截图.png](http://tva1.sinaimg.cn/large/0070vHShly1gzvc68kdakj30sh0lun99.jpg)

### C++ 的priority_queue优先级队列
* priority_queue利用max-heap（默认大顶堆）完成对元素的排序，这个大顶堆是以vector为表现形式的complete binary tree（完全二叉树）
* 大顶堆(降序排列)：priority_queue<int, vector<int>, less<int>> 降序
* 小顶堆(升序排列)：priority_queue<int, vector<int>, greater<int>> 升序

![2022-03-02 09-21-37 的屏幕截图.png](http://tva1.sinaimg.cn/large/0070vHShly1gzv9zhyiw4j30pr0dmagj.jpg)

```
mypqueue1.swap(mypqueue2);

和最小的k个数对
leetcode:https://leetcode-cn.com/problems/qn8gGX/
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
     auto cmp = [&](pair<int,int>& a, pair<int,int>& b){
         return a.first + a.second < b.first + b.second;//小顶堆
     };

     priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> que(cmp);

     for(int i = 0; i < nums1.size() && i < k; i++){
         for(int j = 0; j < nums2.size() && j < k; j++){
             if(que.size() < k){
                  que.push(pair<int,int>(nums1[i], nums2[j]));
             }
             else if(nums1[i] + nums2[j] <= que.top().first + que.top().second){
                
                 que.push(pair<int,int>(nums1[i], nums2[j]));
                  que.pop();
             }
             //if(que.size() > k) que.pop();
         }
     }
     vector<vector<int>>ret;
     vector<int>tem;
     while(!que.empty()){
         tem.push_back(que.top().first);
         tem.push_back(que.top().second);
         ret.push_back(tem);
         tem.clear();
         que.pop();
     }
     return ret;
    }
};
```

### memset(void* a, int initial_value, size_t s)数组初始化工具
```
/*注意memset()只能为数组赋初始值为0
 *原因是memset()函数的实现导致的，
void *memset(void *s,int c,unsigned long n);//n的单位是字节B
void *(memset) (void *s,int c,size_t n)
{
     const unsigned char uc = c;
     unsigned char *su;//截断
     for(su = s;0 < n;++su,--n)
     return s;
 }

*/
int a[n];
memset(a, 0, sizeof(a));
```

### 链表框架

```
/*单链表节点*/
class ListNode {
    int val;
    ListNode next;
}


/*链表的访问*/
void traverse(ListNode head) {
   for (ListNode p = head; p != null; p = p.next) {
        //迭代访问 p.val

   }
}

void traverse(ListNode head) {

  //递归访问head.val
  traverse(head.next);
}

```

### 二叉树框架

```
/*基本的二叉树*/
class TreeNode {
   int val;
    TreeNode left, right;
}

void traverse(TreeNode root) {
    traverse(root.left);
    traverse(root.right);
}
/*N叉树*/

class TreeNode {
    int val;
    TreeNode[] children;
}

void traverse(TreeNode root) {
    for (TreeNode child : root.children)
         traverse(child);
}


class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
//N杈树的遍历
class Solution {
    void traverse(Node* root, vector<int>& b){
        if(root == NULL) return;
        int size = root->children.size();
        for(int i = 0; i < size; i++){
            if(root->children[i]) traverse(root->children[i], b);
        }
        b.push_back(root->val);
    }
public:
    vector<int> postorder(Node* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }
};

//N杈树的层序遍历
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node *>qu;
        vector<vector<int>> result;
        if(root == NULL) return result;
        qu.push(root);
        while(!qu.empty()){ //每循环一次就遍历一层
            int size = qu.size(); //使用size来控制层数
            vector<int> ret;
            for(int i = 0; i < size; i++){
                Node* node = qu.front();
                ret.push_back(node->val);
                qu.pop();
                int csize = node->children.size();//遍历子树。
                for(int j = 0; j < csize; j++){
                    qu.push(node->children[j]);
                }
            }
            result.push_back(ret);
        }
       return result;
    }
};
```

### 数组的遍历

```
for (int l = 2; l <= n; l++) {
  for (int i = 0; i <= n - l; i++) {
    int j = l + i - 1;
    //计算dp[i][j];

 }
}

```


### 二分查找

```
//使用二分查找的前提是数组有序：单调递增或者单调递减
int binarySearch(int[] nums, int target) {
    int left = 0; 
    int right = nums.length - 1; // 注意

    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(nums[mid] == target)
            return mid; 
        else if (nums[mid] < target)
            left = mid + 1; // 注意
        else if (nums[mid] > target)
            right = mid - 1; // 注意
    }
    return -1;
}
/*寻找右侧边界*/
int right_bound(int[] nums, int target) {
    if (nums.length == 0) return -1;
    int left = 0, right = nums.length;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            left = mid + 1; // 注意
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else if (nums[mid] > target) {
            right = mid;
        }
    }
    return left - 1; // 注意
}
```

### 快排
```
int partition(int a[], int start, int end){
    int p = a[start];
    while(start < end){
        while(a[end] >= p && start < end) end--;
        a[start] = a[end];
        while(a[start] < p && start < end) start++;
        a[end] = a[start];
    }
    a[start] = p;
    return start;
}

void qs(int a[], int start, int end){
    if(start >= end){
        return;
    }
    int mid = partition(a, start, end);
    qs(a, start, mid-1);
    qs(a, mid+1, end);
}
```



### 整数按位求和

```
  int getsum(int n){
        int sum = 0;
        while(n){
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
```

### 回溯算法
回溯法，一般可以解决如下几种问题：

* 组合问题：N个数里面按一定规则找出k个数的集合
* 切割问题：一个字符串按一定规则有几种切割方式
* 子集问题：一个N个数的集合里有多少符合条件的子集
* 排列问题：N个数按一定规则全排列，有几种排列方式
* 棋盘问题：N皇后，解数独等等

1. 因为回溯法解决的都是在集合中递归查找子集，集合的大小就构成了树的宽度，递归的深度，都构成的树的深度
![huisu.png](http://tva1.sinaimg.cn/large/0070vHShly1gzr6c4aq8nj311s0ls453.jpg)
```

//回溯代码模板
void backtracking(参数) {
    if (终止条件) {
        存放结果;
        return;
    }

    for (选择：本层集合中元素（树中节点孩子的数量就是集合的大小）) {
        处理节点;
        backtracking(路径，选择列表); // 递归
        回溯，撤销处理结果
    }
}
```
##### 子集问题
![leetcode](https://programmercarl.com/0090.%E5%AD%90%E9%9B%86II.html#_90-%E5%AD%90%E9%9B%86ii)
```
class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int>& nums, int startIndex, vector<bool>& used) {
        result.push_back(path);
        for (int i = startIndex; i < nums.size(); i++) {
            // used[i - 1] == true，说明同一树枝candidates[i - 1]使用过
            // used[i - 1] == false，说明同一树层candidates[i - 1]使用过
            // 而我们要对同一树层使用过的元素进行跳过
            if (i > 0 && nums[i] == nums[i - 1] && used[i - 1] == false) {
                continue;
            }
            path.push_back(nums[i]);
            used[i] = true;
            backtracking(nums, i + 1, used);
            used[i] = false;
            path.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        result.clear();
        path.clear();
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end()); // 去重需要排序
        backtracking(nums, 0, used);
        return result;
    }
};
```



### 动态规划的dp
#### 一维数组(0-1背包问题,)
1. dp[j]表示：容量为j的背包，所背的物品价值可以最大为dp[j]
2. 递归公式：dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
3. 求装满背包有几种方法，递推公式一般都是dp[i] += dp[i - nums[j]];
```
一维数组倒序遍历 

for(int i = 0; i < weight.size(); i++) { // 遍历物品
    for(int j = bagWeight; j >= weight[i]; j--) { // 遍历背包容量
        dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);

    }
}

完全背包问题
// 先遍历物品，再遍历背包
for(int i = 0; i < weight.size(); i++) { // 遍历物品
    for(int j = weight[i]; j <= bagWeight ; j++) { // 遍历背包容量
        dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);

    }
}
```
4. 如果求组合数就是外层for循环遍历物品，内层for遍历背包。如果求排列数就是外层for遍历背包，内层for循环遍历物品。
![leetcode](https://leetcode-cn.com/problems/combination-sum-iv/)
```
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1, 0);
        dp[0] = 1;//先遍历背包
        for(int i = 0; i <= target; i++){
            for(int j = 0; j < nums.size(); j++){//在遍历物品
                if(i - nums[j] >= 0 &&  dp[i - nums[j]] < INT_MAX - dp[i])
                    dp[i] += dp[i - nums[j]];
            }
        }
        return dp[target];
    }
};
```

#### 二维数组
1. dp[i][j] 表示从下标为[0-i]的物品里任意取，放进容量为j的背包，价值总和最大是多少。
2. 递归公式： dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
```
//二维数组注意赋初始值
for (int j = 0 ; j < weight[0]; j++) {  // 当然这一步，如果把dp数组预先初始化为0了，这一步就可以省略，但很多同学应该没有想清楚这一点。
    dp[0][j] = 0;
}
// 正序遍历
for (int j = weight[0]; j <= bagweight; j++) {
    dp[0][j] = value[0];
}


for(int i = 1; i < weight.size(); i++) { // 遍历物品
        for(int j = 0; j <= bagweight; j++) { // 遍历背包容量
            if (j < weight[i]) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);

        }
    }
```




#### 1的比特数
1.  最直观的做法是对从 0 到 n 的每个整数直接计算「一比特数」。每个 int 型的数都可以用 32 位二进制数表示，只要遍历其二进制表示的每一位即可得到 1 的数目。

利用Brian Kernighan 算法，可以在一定程度上进一步提升计算速度。Brian Kernighan 算法的原理是：对于任意整数 x，令 x=x & (x−1)，该运算将 x 的二进制表示的最后一个 1 变成0。因此，对 x 重复该操作，直到 x 变成 0，则操作次数即为x 的「一比特数」。


#### 滑动窗口

```
while (end < ***.size()){
            将***[end]加入窗口;
            while (start <= end && 比目标值大){
                将***[start]踢出窗口;
                ++start;
                在此处逻辑操作;
            }
            或在此处进行逻辑操作;
            ++end;
        }

```


#### 拓扑排序
1. 拓扑排序算法是每次都从有向无环图中取出入度为 0 的节点添加到拓扑排序的序列中，
2. 然后删除以该节点为起点的边(与该节点相连的节点的入度减1)。重复以上过程，直至图为空或者不存在入度为 0 的节点，
3. 若最终图为空，那么图就是一个有向无环图，若最终图不为空且已不存在入度为 0 的节点，那么该图一定有环。
4. [!leetcode](https://leetcode-cn.com/problems/QA2IGt/)
```
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        //拓扑排序(有向无环图)
        unordered_map<int,vector<int>>grap;//邻接表存储图
        vector<int>indegress(numCourses, 0);//在建图的时候初始化边
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
```
