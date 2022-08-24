#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<char>ret = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	vector<int>s;

	while(n) {
		s.push_back(n % 16);
		n = n / 16;
	}
	reverse(s.begin(),s.end());
	string str = "0x";

	for(int i = 0; i < s.size(); ++i) {
		str += ret[s[i]];
	}
	cout<<str<<endl;
}
