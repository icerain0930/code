#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/OÀu¤Æ
string s;
cin>>s;
int l=s.length();
for(int i=0;i<l-1;i++){
	cout<<s[i]<<"-";
}cout<<s[l-1];
return 0;
}

