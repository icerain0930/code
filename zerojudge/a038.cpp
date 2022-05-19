#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0),cin.tie(0); // I/O??
string s;
int num=1;
cin>>s;
int l=s.size();
num=s[l-1]-48;
for(int i=1;i<l;i++){
	num=num*10+s[l-i-1]-48;
}
cout<<num;
return 0;
}
