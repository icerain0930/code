#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0),cin.tie(0); // I/O
string s;
cin>>s;
int l=s.size();
for(int i=0;i<l;i++){
	if(i==0 || i==l-1)cout<<s[i];
	else cout<<"_";
}
return 0;
}
