#include<bits/stdc++.h>


using namespace std;

bool isPrime(int n) {
    for(int i = 2; i < n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin>>n>>m;
    int ret = 0;
    for(int i = n; i < m -2; ++i) {
        if(isPrime(i) && isPrime(i + 2)) {
            ++ret;
            cout<<i <<" "<<i + 2<<endl;
        }
    }
    cout<<"总共的孪生素数： "<<ret<<endl;
    return 0;
}
