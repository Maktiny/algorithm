1. 输入一行字符串
```c
    //cin读入以空格结束，所以读入的字符串中有空格的需要使用getline(cin, s)读入一整行

    string s;
    while(getline(cin,s)) {
    
}
```

2. 构造链表
```c

struct ListNode {
    int val;
    ListNode* next;
    ListNode():val(0), next(nullptr) {};
    ListNode(int x): val(x), next(nullptr){};
    ListNode(int x, ListNode* next): val(x), next(next){};
}
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
```

3. c++控制输出小数点的位数
```c

cout<<fixed<<setprecision(1)<<"要输出的内容"<<endl;//精确到一位。
```

3. 最长回文子串
```c
1. 如果只能删掉头部或者尾部， 使用中心扩散法
https://www.nowcoder.com/practice/12e081cd10ee4794a2bd70c7d68f5507?tpId=37&tags=&title=&difficulty=2&judgeStatus=3&rp=1&sourceUrl=%2Fexam%2Foj%2Fta%3Fdifficulty%3D2%26judgeStatus%3D3%26page%3D1%26pageSize%3D50%26search%3D%26tpId%3D37%26type%3D37
2. 如果能删除任意位置的节点，使用动归法dp[i][j] 表示i.....j 的最长回文子序列。
https://leetcode.cn/problems/longest-palindromic-subsequence/

```

### 九坤投资
1. fflush(stdout) 输出
2. if(fork() == 0) 创建子进程，返回0，父进程从这点开始分叉，
3. 编程题：1:数组中不相邻的数的最大和 2:判断数独
