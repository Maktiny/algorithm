#include<bits/stdc++.h>

using namespace std;

string a_add_b(string a, string b) {
 char m = '0', n = '0';
 string ret = "";
 int i = a.size() - 1;
 int j = b.size() - 1;
 int tem = 0;
 int carry = 0;
  for(; i >= 0 && j >= 0; --i, --j) {
	m = a[i];
	n = b[j];
	tem = (m - '0') + (n - '0') +carry;
      carry = tem / 10;
      tem = tem % 10;
     char t = tem + '0';
    ret  = t + ret;     
  }
  m = '0';
  n = '0';
  while(i > 0) {
   m = a[i];
	tem = (m - '0') +carry;
      carry = tem / 10;
      tem = tem % 10;
     char t = tem  + '0';
    ret  = t + ret;  
    --i;
  }
  while(j> 0) {
   n = b[j];
	tem = (n - '0') +carry;
      carry = tem / 10;
      tem = tem % 10;
     char t = tem + '0';
    ret  = t + ret;  
    --j;
  }
  if(carry != 0) {
	  char s = carry + '0';
	 ret = s + ret; 
  }
  return ret;
}

string a_reduce_b(string a, string b) {
	char m = '0', n = '0';
	int i = a.size() - 1;
	int j = b.size() - 1;
	int tem = 0;
	int carry = 0;
	string ret  = "";
	for(; i >= 0 && j>= 0; --i, --j) {
		m = a[i];
		n = b[j];
		if((m - '0') + carry  < (n - '0')) {
			tem = (m - '0') + carry + 10 - (n - '0');
			carry = -1;
		}
		else {
			tem = (m - '0') - (n - '0');
			carry = 0;
		}
		char t = tem + '0';
		ret = t + ret;
	}
	while( i > 0) {
		if((m - '0') + carry < 0){
		 tem = (m - '0') + carry + 10;
		 carry = -1;
		}
		else{
		 tem = m;
		}
		char t =  tem;
		ret = t + ret;
	}
	return ret;
}

int main() {
 string a, b;
 string ret = "" ;
 cin>>a>>b;
 int asize = a.size();
 int bsize = b.size();
 bool flag = false;
 if(a[0] != '-' && b[0] != '-') {//postive - postive
  
 }
 else if(a[0] == '-' && b[0] == '-') {//negtive - negtive
 
 }
 else if(a[0] == '-' && b[0] != '-') {//negtive - postive
 // a + b = negtive
 
 }
 else if(a[0] != '-' && b[0] == '-') {//postive - negtive
 // a + b = postive
 ret = a_add_b(a, b.substr(1));
 }
  ret = a_reduce_b(a, b);

 cout<<"SSSSSSSSSSSSSSSSSSSSSSSSSSSSS"<<endl;
 cout<<ret<<endl;
return 0;
}
