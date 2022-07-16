#include<stdio.h>
#include<string.h>

//递归的方式的整数划分
//参考：https://blog.csdn.net/huzhigenlaohu/article/details/52198345
int ShareApple(int apple,int basket){
    // 因为我们总是让apple >= basket来求解的，所以apple - basket >= 0,
    // 让apple = 0时候结束，如果改为apple = 1，可能得不到正确解
    if(apple == 0 || basket == 1){
        return 1;
    }//if
    // 篮子多于苹果 按照苹果个数分
    else if(apple < basket){
        return ShareApple(apple,apple);
    }//else
    return ShareApple(apple,basket-1) + ShareApple(apple - basket,basket);
}


//动规的解法
int dynamic_process (int n) {
    /* int **dp = (int **) malloc((n + 2) * sizeof(int *));
    for (int i = 0; i <= n; ++i){
        dp[i] = (int *) malloc((n + 2) * sizeof(int));
    }
    memset(dp, 0, sizeof(dp));
   */
    int dp[4+ 2][4+ 2] = {0};

    dp[0][0] = 1;
    for (int i = 0; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if(j > i) dp[i][j] = dp[i][i];

            else dp[i][j] = dp[i][j -1] + dp[i - j][j];
        }
    }
    return dp[n][n];
}

int main(){
    int ret = ShareApple(4, 4);
    int ret2 = dynamic_process(4);
    printf("%d\n", ret);
    printf("%d", ret2);

    //测试字符转数字
    int a = 5;
    printf("%s",a + '0');
}
