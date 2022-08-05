#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/OÀu¤Æ
string s;
cin>>s;
int l=s.size();
string s2=s+s;
for(int i=0;i<l;i++){
	for(int j=i;j<i+l;j++){
		cout<<s2[j];
	}cout<<"\n";
}
return 0;
}

