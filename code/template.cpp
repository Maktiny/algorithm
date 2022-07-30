#include<bits/stdc++.h>

using namespace std;

//模板的声明:
template <typename X, typename Y>
X Max(X a, Y b) {
    return a > b ? a : b;
}

int main() {
    cout<<Max(2,10)<<endl;
    cout<<Max('a', 'd')<<endl;
    return 0;
}

