#include<stdio.h>
#include<stdlib.h>


int coinChange(int* coins, int coinsSize, int amount){
    int *dp = (int *)malloc(amount * sizeof(int));
    dp[0] = 0;
    
    for(int i = 1;i < amount; i++) {
        
        dp[i] = amount + 1;
        for(int j = 0; j < coinsSize; j++){
            if(coins[j] < i){
                dp[i] = dp[i] > (dp[i - coins[j]] + 1) ? (dp[i - coins[j]] + 1) : dp[i];
            }
        }
    }
    return dp[amount] > amount ? -1 : dp[amount];
}

int main(){
 
   int coins[3] = {1, 2, 5}; 
   int amount = 11;
   

   printf("result is %d\n", coinChange(coins, 3,amount));



    return 0;
}
