#include<bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin>>n;
    int size = n;
    vector<int>person;
    int tem;
    while(n--){
        cin>>tem;
        person.push_back(tem);
    }
    sort(person.begin(), person.end());
    int i = 1, j = size - 2;
    while(i < j){
        swap(person[i++], person[j--]);
    }
    i = 0;
    long long result = 0;
    for(; i < size -1; i++){
        result += abs(person[i+ 1] - person[i]);
    }
    result += abs(person[size -1] - person[0]);
    cout<<result<<endl;
    i = 0;
    for(; i < size; i++){
        cout<<person[i]<<' ';
    }
    cout<<endl;
    return 0;
}
