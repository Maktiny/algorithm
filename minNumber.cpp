#include<bits/stdc++.h>

using namespace std;

static bool cmp(int a, int b){
        string x = to_string(a);
        string y = to_string(b);
        int m = stoi(x + y);
        
        int n = stoi(y + x);
        cout<<m<<endl<<n<<endl;
        return m < n;
    }

      int strToInt(string str) {
       if(str[0] >= 'a' && str[0] <= 'z'){
                return 0;
        }
        
        
        int size = str.size();
        int i = 0;
        int j = 0;
        while(j < str.size()){
            if(str[j] == ' ') j++;
            else break;
        }
        cout<<str[j]<<endl;
        i = j;
        int flag = 0;
        long long sum = 0;
        while(i < str.size()){
            if(str[i] == '-'){
                flag = 1;
                i++;
                continue;
            }
            else if(str[0] >= '0' && str[i] <= '9'){
                sum = sum * 10 + (str[i] - '0');
                i++;
                cout<<sum<<endl;
                if(str[i] > '9' || str[i] < '0') break;
            }
            
        }
        if(flag){
            if(sum *(-1) < INT_MIN) return INT_MIN;
            else return sum * (-1);
        }
        else{
            if(sum > INT_MAX) return INT_MAX;
            else return sum;
        }
    }int main(){
  cout<<cmp(10,2)<<endl;
  cout<<strToInt("  -42")<<endl;
}
