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
vector<vector<int>> matrix(m);
    for(int i=0; i!=matrix.size(); i++)
        matrix[i].resize(n);
    
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
* priority_queue利用max-heap（大顶堆）完成对元素的排序，这个大顶堆是以vector为表现形式的complete binary tree（完全二叉树）
![2022-03-02 09-21-37 的屏幕截图.png](http://tva1.sinaimg.cn/large/0070vHShly1gzv9zhyiw4j30pr0dmagj.jpg)

```
mypqueue1.swap(mypqueue2);
```

### memset(void* a, int initial_value, size_t s)数组初始化工具
```
/*注意memset()只能为数组赋初始值为0
 *原因是memset()函数的实现导致的，
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














