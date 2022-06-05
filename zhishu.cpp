#include<bits/stdc++.h>

using namespace std;

int countPrimes(int n) {
        if(n <= 2) return 0;

        vector<short> dp(n, 1);

        //int i = 2, j = 0;
        int count  = n - 2; //排除0 , 1
        for(int i = 2; i <= n; i++){
            if (dp[i]){
                for(int j = i * 2; j < n; j += i){//至少有因数 2
                    if(dp[j]){
                        dp[j] = 0;
                        count--;
                    }
                }
            }
            //cout<<i<<endl;
        }
        return count;
}

int main(){
    int n = 10;
    cout<<countPrimes(n)<<endl;
}
