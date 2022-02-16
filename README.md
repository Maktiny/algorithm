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
        if (j - coins[i] >= 0) dp[j] += dp[j - coins[i]];
    }
}
```
背包容量的每一个值，都是经过 1 和 5 的计算，包含了{1, 5} 和 {5, 1}两种情况。

此时dp[j]里算出来的就是排列数！

