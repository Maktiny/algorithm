#include<bits/stdc++.h>

using namespace std;


int main() {
    int num = 10;
    int &b = num;//左值引用，b就是num的别名，对b的修改，就是对num的修改
    cout<<b<<endl;
    b = 20;
    cout<<b<<endl;
    cout<<num<<endl;
    

    int &&a = 40;//右值引用，可以修改右值
    cout<<a<<endl;
    a = 50;
    cout<<a<<endl;

    int d[5] = {1,43,2,545,6};
    sort(d,d+5, [=](int a, int b)->bool{return a < b;});
    for(int i = 0; i < 5; ++i){
        cout<<d[i]<<" ";
    }

    return 0;
}
