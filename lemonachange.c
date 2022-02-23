#include<stdio.h>
#include<string.h>
#define bool int
#define false 0
#define true 1

bool lemonadeChange(int* bills, int billsSize){
    int dp[3] = {0};
    for(int i = 0; i < billsSize; i++){
        if(bills[i] == 5){
            dp[0] += 1;
        }
        else if(bills[i] == 10){
            if(dp[0] >= 1){
                dp[0] -= 1;
                dp[1] += 1;
            }
            else
               return false;
        }
        else if(bills[i] == 20){
            if(dp[0] >= 3){
                dp[0] -= 3;
                dp[2] += 1;
            }
            else if(dp[0] >= 1 && dp[1] >=1){
                dp[0] -= 1;
                dp[1] -= 1;
                dp[2] += 1;
            }
            else{
               printf("result is %d\n", dp[0]);
                printf("result is %d\n", dp[1]);
                return false;
            }
        }
        
    }
    return true;
}

int main(){
  int a[5] = {5,5,5,10,20};
  printf("result is %d\n", lemonadeChange(a, 5));
}
