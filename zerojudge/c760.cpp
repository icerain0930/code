#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0),cin.tie(0); // I/O
string s;
char c;
getline(cin,s);
int l=s.size();
for(int i=0;i<l;i++){
	if(i==0){
		c=s[0]-32;
		cout<<c;
	}
	else if(s[i]==' ')cout<<"\n";
	else if(s[i-1]==' '){
		c=s[i]-32;
		cout<<c;
	}
	else cout<<s[i];
}
return 0;
}

