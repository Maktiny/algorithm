#include<bits/stdc++.h>

using namespace std;

int smallestDifference(vector<int>& a, vector<int>& b) {
        int sizea = a.size();
        int sizeb = b.size();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0;
        long res = LONG_MAX;
        for(; i < sizea; i++){
          cout<<i<<endl; 
          int j = 0;
          for(;j < sizeb; j++){

                long tem = abs((long)a[i]-(long)b[j]);
                //if(tem == -2147483648) res = LONG_MAX;
                cout<<"result "<<tem<<endl;
                //cout<<"result "<<res<<endl;
                res = min(res, tem);
                 cout<<"result "<<res<<endl;
            }
        }
        return res;
}

int main(){
  vector<int>a{-2147483648,1};
  vector<int>b{2147483647,0};
  smallestDifference(a, b);
  return 0;
}
