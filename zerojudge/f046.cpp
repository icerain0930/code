#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/OÀu¤Æ
string s,s1="#",s2;
int a,b;
cin>>a;
getline(cin,s);
getline(cin,s);
cin>>b;
for(int i=0;i<a;i++)s2=s1+s2;
s=s2+s+s2;

for(int j=b;j<a+b;j++){
	if(s[j]=='#')cout<<" ";
	else cout<<s[j];
}


return 0;
}

