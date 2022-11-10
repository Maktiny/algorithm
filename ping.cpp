#include<bits/stdc++.h>

using namespace std;


double my_sqrt(double value, double delta) {

    double l = 0.0 , r = value;
    while(r - l > delta) {
        double mid = (l + r) / 2.0;
        if(mid * mid  >= value) {
            r = mid;
        }
        else {
            l = mid;
        }
    }
    return r;
}

int main() {
    double x ; 
    int delta;
    //时间复杂度log2n, n = delta，也就是精度
    while(cin>>x>>delta) {
        double del = 1.0 / delta;
        double ret = my_sqrt(x, del);
        cout<<fixed<<setprecision(delta)<<ret<<endl;
    }
    return 0;
}
