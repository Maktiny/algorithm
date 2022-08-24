#include<bits/stdc++.h>

using namespace std;

int main() {
    unsigned int a = 13;// 1101   ---> 1011
    
    unsigned int te = 0;
    cout<<bitset<sizeof(a)*8>(a)<<endl;
    //for(int i = 0; i <= 31; ++i) {
          te =  a & 1;
          te = te << 31;
          a = te + (a >> 1);
    //}
    cout<<bitset<sizeof(a)*8>(a)<<endl;
    return 0;
}
