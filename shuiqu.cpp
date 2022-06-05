#include<bits/stdc++.h>

using namespace std;


int main(void){
    int n, result = 0,number = 0;
    cin>>n;
    number = n;
    vector<int>house;
    int x, y;
    int tem = 0;
    while(n--){
        cin>>x>>y;
        tem += x;
        house.push_back(x);
    }
    int mid = number / 2;
    int i = 0;
    for(; i < number; i++){
        result += abs(house[i] - house[mid]);
    }
    cout<<result<<endl;
    return 0;
}
