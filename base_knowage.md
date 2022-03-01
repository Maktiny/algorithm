## 基本的数据结构

### C 常用语法
```
1. 字符串数 char s[2] = "ss"; //c语言没有字符串类型
2. char *p = s;
3. strlen(p) //计算字符串s的长度
```

### c++常用语法

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
       cout<<"Find, the value is"<<iter->second<<endl;
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
```
### C++ unordered_set
![2022-02-28 14-14-45 的屏幕截图.png](http://tva1.sinaimg.cn/large/0070vHShly1gzt7b2vnnij30l50ahq7w.jpg)
![2022-02-28 14-26-06 的屏幕截图.png](http://tva1.sinaimg.cn/large/0070vHShly1gzt7jyx6jaj30k90d3dph.jpg)

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














