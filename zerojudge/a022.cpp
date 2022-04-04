#include<bits/stdc++.h>
using namespace std;
int main(){
bool test=true;
ios_base::sync_with_stdio(0);
cin.tie(0);
string s;
cin>>s;
int len=s.length();
int hl;
if(len%2==1)hl=(len+1)/2;
else hl=len/2;
if(len==1)test=true;
else{
	for(int i=0;i<len;i++){
		if(s[i]!=s[len-i-1])test=false;
		if(s[i]==s[len-i-1])test=true;
	}
}
if(test)cout<<"yes\n";
else cout<<"no\n"; 
return 0;
}

