## 动态规划系列(base case， dp[]含义，状态转移方程)

1. 最长递增子序列
* dp[i] 表示以 nums[i] 这个数结尾的最长递增子序列的长度。
* base case：dp[i] 初始值为 1，因为以 nums[i] 结尾的最长递增子序列起码要包含它自己
* 状态转移方程： 每一个dp[i]的计算都要遍历寻找递增子序列，nums[i] > nums[j],则dp[i] + 1。两层for循环
* [leetcode](https://leetcode-cn.com/problems/longest-increasing-subsequence/)


2. 编辑距离
* 解决两个字符串的动态规划问题，一般都是用两个指针 i,j 分别指向两个字符串的最后，然后一步步往前走，缩小问题的规模。
* 对于每对儿字符 s1[i] 和 s2[j]，可以有四种操作：

if s1[i] == s2[j]:
    啥都别做（skip）
    i, j 同时向前移动
else:
    三选一：
        插入（insert）
        删除（delete）
        替换（replace）
* base case 是 i 走完 s1 或 j 走完 s2，可以直接返回另一个字符串剩下的长度。
* [leetcode:](https://leetcode-cn.com/problems/edit-distance/submissions/)


3. 背包问题
*  dp[n][w]对于前n个物品，当前背包的容量为 w，这种情况下可以装的最大价值是 dp[n][w]
*  base case:dp[0][..] = dp[..][0] = 0，因为没有物品或者背包没有空间的时候，能装的最大价值就是0

```
for (int i = 1; i <= N; i++) {
        for (int w = 1; w <= W; w++) {
            if (w - wt[i-1] < 0) {
                // 这种情况下只能选择不装入背包
                dp[i][w] = dp[i - 1][w];
            } else {
                // 装入或者不装入背包，择优
                dp[i][w] = max(dp[i - 1][w - wt[i-1]] + val[i-1], 
                               dp[i - 1][w]);
            }
        }
```

4. 零钱兑换(最少硬币数)
* 给你一个整数数组 coins ，表示不同面额的硬币；以及一个整数 amount ，表示总金额。

计算并返回可以凑成总金额所需的 最少的硬币个数 。如果没有任何一种硬币组合能组成总金额，返回 -1 

* ![2022-02-16 09-46-10 的屏幕截图.png](http://tva1.sinaimg.cn/large/0070vHShly1gzf42fh32oj30m706478x.jpg)
* [leetcode](https://leetcode-cn.com/problems/coin-change/)
```
int coinChange(int* coins, int coinsSize, int amount){
    int *dp = (int *)malloc((amount + 1) * sizeof(int));
    dp[0] = 0;
    
    for(int i = 1;i <= amount; i++) {
        
        dp[i] = amount + 1;
        for(int j = 0; j < coinsSize; j++){
            if(coins[j] <= i){
                dp[i] = dp[i] > (dp[i - coins[j]] + 1) ? (dp[i - coins[j]] + 1) : dp[i];
            }
        }
    }
    return dp[amount] > amount ? -1 : dp[amount];
}
```
* (硬币组合)给你一个整数数组 coins 表示不同面额的硬币，另给一个整数 amount 表示总金额。

请你计算并返回可以凑成总金额的硬币组合数。如果任何硬币组合都无法凑出总金额，返回 0 。

假设每一种面额的硬币有无限个。

* [LeetCode](https://leetcode-cn.com/problems/coin-change-2)
* 确定dp数组以及下标的含义
dp[j]：凑成总金额j的货币组合数为dp[j]

确定递推公式
dp[j] （考虑coins[i]的组合总和） 就是所有的dp[j - coins[i]]（不考虑coins[i]）相加。

所以递推公式：dp[j] += dp[j - coins[i]];
外层for循环遍历物品（钱币），内层for遍历背包（金钱总额）的情况。

代码如下：
```
for (int i = 0; i < coins.size(); i++) { // 遍历物品
    for (int j = coins[i]; j <= amount; j++) { // 遍历背包容量
        dp[j] += dp[j - coins[i]];
    }
}
```
假设：coins[0] = 1，coins[1] = 5。

那么就是先把1加入计算，然后再把5加入计算，得到的方法数量只有{1, 5}这种情况。而不会出现{5, 1}的情况。

所以这种遍历顺序中dp[j]里计算的是组合数！

如果把两个for交换顺序，代码如下：

```
for (int j = 0; j <= amount; j++) { // 遍历背包容量
    for (int i = 0; i < coins.size(); i++) { // 遍历物品
        if (j - coins[i] >= 0) 
             dp[j] += dp[j - coins[i]];
    }
}
```
背包容量的每一个值，都是经过 1 和 5 的计算，包含了{1, 5} 和 {5, 1}两种情况。

此时dp[j]里算出来的就是排列数！


### 子序列问题
* 在子数组 arr1[0..i] 和子数组 arr2[0..j] 中，我们要求的子序列（[最长公共子序列](https://leetcode-cn.com/problems/longest-common-subsequence/)）长度为 dp[i][j]。
在子数组 array[i..j] 中，我们要求的子序列（[最长回文子序列](https://leetcode-cn.com/problems/longest-palindromic-subsequence/submissions/)）的长度为 dp[i][j]。
* 在子串 s[i..j] 中，最长回文子序列的长度为 dp[i][j]
* 如果只有一个字符，显然最长回文子序列长度是 1，也就是 dp[i][j] = 1 (i == j)。

因为 i 肯定小于等于 j，所以对于那些 i > j 的位置，根本不存在什么子序列，应该初始化为 0。
```
if (s[i] == s[j])
    // 它俩一定在最长回文子序列中
    dp[i][j] = dp[i + 1][j - 1] + 2;
else
    // s[i+1..j] 和 s[i..j-1] 谁的回文子序列更长？
    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
```
状态转移方程就写出来了，根据 dp 数组的定义，我们要求的就是 dp[0][n - 1]，也就是整个 s 的最长回文子序列的长度。

### 股票问题
* dp[i][k][0/1] dp表示获得的利润，i表示第几天，k表示允许交易次数，0/1表示持有/没有持有 
```

dp[i][k][0] = max(dp[i-1][k][0], dp[i-1][k][1] + prices[i])
              max( 今天选择 rest,        今天选择 sell       )
解释：今天我没有持有股票，有两种可能，我从这两种可能中求最大利润：

1、我昨天就没有持有，且截至昨天最大交易次数限制为 k；然后我今天选择 rest，所以我今天还是没有持有，最大交易次数限制依然为 k。

2、我昨天持有股票，且截至昨天最大交易次数限制为 k；但是今天我 sell 了，所以我今天没有持有股票了，最大交易次数限制依然为 k。

dp[i][k][1] = max(dp[i-1][k][1], dp[i-1][k-1][0] - prices[i])
              max( 今天选择 rest,         今天选择 buy         )
解释：今天我持有着股票，最大交易次数限制为 k，那么对于昨天来说，有两种可能，我从这两种可能中求最大利润：

1、我昨天就持有着股票，且截至昨天最大交易次数限制为 k；然后今天选择 rest，所以我今天还持有着股票，最大交易次数限制依然为 k。

2、我昨天本没有持有，且截至昨天最大交易次数限制为 k - 1；但今天我选择 buy，所以今天我就持有股票了，最大交易次数限制为 k。

```
*[参考](https://github.com/labuladong/fucking-algorithm/blob/master/%E5%8A%A8%E6%80%81%E8%A7%84%E5%88%92%E7%B3%BB%E5%88%97/%E5%9B%A2%E7%81%AD%E8%82%A1%E7%A5%A8%E9%97%AE%E9%A2%98.md)




### 打家劫舍问题
```
dp[n + 2]
// dp[i] = x 表示：
    // 从第 i 间房子开始抢劫，最多能抢到的钱为 x
    // base case: dp[n] = 0
for(int i = numsSize -1; i >= 0 ; i--) {
        dp[i] = dp[i+1] > (dp[i+2] + nums[i]) ? dp[i+1] : (dp[i+2] + nums[i]);
    }
```
[参考](https://github.com/labuladong/fucking-algorithm/blob/master/%E5%8A%A8%E6%80%81%E8%A7%84%E5%88%92%E7%B3%BB%E5%88%97/%E6%8A%A2%E6%88%BF%E5%AD%90.md)


### 按键问题
* 要么一直按 A：A,A,...A（当 N 比较小时）。

要么是这么一个形式：A,A,...C-A,C-C,C-V,C-V,...C-V（当 N 比较大时）。

因为字符数量少（N 比较小）时，C-A C-C C-V 这一套操作的代价相对比较高，可能不如一个个按 A；而当 N 比较大时，后期 C-V 的收获肯定很大。这种情况下整个操作序列大致是：开头连按几个 A，然后 C-A C-C 组合再接若干 C-V，然后再 C-A C-C 接着若干 C-V，循环下去。

换句话说，最后一次按键要么是 A 要么是 C-V

```
dp[i] 表示 i 次操作后最多能显示多少个 A
 for (int i = 1; i <= N; i++) {
        // 按 A 键
        dp[i] = dp[i - 1] + 1;
        for (int j = 2; j < i; j++) {
            // 全选 & 复制 dp[j-2]，连续粘贴 i - j 次
            // 屏幕上共 dp[j - 2] * (i - j + 1) 个 A
            dp[i] = Math.max(dp[i], dp[j - 2] * (i - j + 1));
        }
    }
```

### 字符串匹配问题
* 当 p[j + 1] 为 * 通配符时，我们分情况讨论下：

1、如果 s[i] == p[j]，那么有两种情况：

1.1 p[j] 有可能会匹配多个字符，比如 s = "aaa", p = "a*"，那么 p[0] 会通过 * 匹配 3 个字符 "a"。

1.2 p[i] 也有可能匹配 0 个字符，比如 s = "aa", p = "a*aa"，由于后面的字符可以匹配 s，所以 p[0] 只能匹配 0 次。

2、如果 s[i] != p[j]，只有一种情况：

p[j] 只能匹配 0 次，然后看下一个字符是否能和 s[i] 匹配。比如说 s = "aa", p = "b*aa"，此时 p[0] 只能匹配 0 次。

```
if (s[i] == p[j] || p[j] == '.') {
    // 匹配
    if (j < p.size() - 1 && p[j + 1] == '*') {
        // 有 * 通配符，可以匹配 0 次或多次
    } else {
        // 无 * 通配符，老老实实匹配 1 次
        i++; j++;
    }
} else {
    // 不匹配
    if (j < p.size() - 1 && p[j + 1] == '*') {
        // 有 * 通配符，只能匹配 0 次
    } else {
        // 无 * 通配符，匹配无法进行下去了
        return false;
    }
}

```
[参考](https://github.com/labuladong/fucking-algorithm/blob/master/%E5%8A%A8%E6%80%81%E8%A7%84%E5%88%92%E7%B3%BB%E5%88%97/%E5%8A%A8%E6%80%81%E8%A7%84%E5%88%92%E4%B9%8B%E6%AD%A3%E5%88%99%E8%A1%A8%E8%BE%BE.md)


## 贪心算法
* 将问题分解为若干个子问题
* 找出适合的贪心策略
* 求解每一个子问题的最优解
* 将局部最优解堆叠成全局最优解

### 摆动序列
* 使用pre ,curr记录差值,如果满足要求则pre = curr，如果不满足，则pre仍然为原来的值，curr继续向前遍历。
* [leetcode](https://leetcode-cn.com/problems/wiggle-subsequence/)

### 最大子数组和
* (贪心算法) 遍历nums，从头开始用count累积，如果count一旦加上nums[i]变为负数，那么就应该从nums[i+1]
开始从0累积count了，因为已经变为负数的count，只会拖累总和。
* (动态规划) ：dp[i]表示包括i之前的最大连续子序列和
* dp[i] = max(dp[i - 1] + nums[i], nums[i]); // 状态转移公式
![53.最大子序和.gif](http://tva1.sinaimg.cn/large/0070vHShly1gzhv750xs4g30bk08ynpd.gif)


### 跳跃游戏

* 每次取最大跳跃步数（取最大覆盖范围），整体最优解：最后得到整体最大覆盖范围，看是否能到终点。
* *[leetcode](https://programmercarl.com/0055.%E8%B7%B3%E8%B7%83%E6%B8%B8%E6%88%8F.html#%E6%80%9D%E8%B7%AF)


### 加油站
* 首先如果总油量减去总消耗大于等于零那么一定可以跑完一圈
* 每个加油站的剩余量rest[i]为gas[i] - cost[i]。
i从0开始累加rest[i]，和记为curSum，一旦curSum小于零，说明[0, i]区间都不能作为起始位置，起始位置从i+1算起，再从0计算curSum
* [leetcode](https://programmercarl.com/0134.%E5%8A%A0%E6%B2%B9%E7%AB%99.html#%E8%B4%AA%E5%BF%83%E7%AE%97%E6%B3%95-%E6%96%B9%E6%B3%95%E4%B8%80)



### 分发糖果
* 本题采用了两次贪心的策略：
candy[i],初始值为1，
一次是从左到右遍历，只比较右边孩子评分比左边大的情况candy[i] = candy[i - 1] + 1;。
一次是从右到左遍历，只比较左边孩子评分比右边大的情况candy[i] = (candy[i - 1] + 1,candy[i])。
[leetcode](https://programmercarl.com/0135.%E5%88%86%E5%8F%91%E7%B3%96%E6%9E%9C.html#%E6%80%9D%E8%B7%AF)


### 柠檬水找零
* 有如下三种情况：

情况一：账单是5，直接收下。
情况二：账单是10，消耗一个5，增加一个10
情况三：账单是20，优先消耗一个10和一个5，如果不够，再消耗三个5
循环，三种情况分别处理。
* [leetcode](https://leetcode-cn.com/problems/lemonade-change/)


### 根据身高重建队列
* 遇到两个维度权衡的时候，一定要先确定一个维度，再确定另一个维度。
* 先按照身高排序，然后在利用vector的特性插入
* [leetcode](https://programmercarl.com/0406.%E6%A0%B9%E6%8D%AE%E8%BA%AB%E9%AB%98%E9%87%8D%E5%BB%BA%E9%98%9F%E5%88%97.html#%E6%80%9D%E8%B7%AF)


### 最少数量的箭引爆气球
* 让气球尽可能的重叠，需要对数组进行排序。
* 每次都把最小右边界赋值给下一个元素，只有该元素的左边小于最小右边界
才能用一支箭射穿。
* [leetcode](https://programmercarl.com/0452.%E7%94%A8%E6%9C%80%E5%B0%91%E6%95%B0%E9%87%8F%E7%9A%84%E7%AE%AD%E5%BC%95%E7%88%86%E6%B0%94%E7%90%83.html#%E6%80%9D%E8%B7%AF)


### 


