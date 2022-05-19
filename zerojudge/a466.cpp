#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
string s;
cin>>n;
for(int i=0;i<n;i++){
	cin>>s;
	int len=s.length();
	if(len==5)cout<<"3\n";
	else{
		if(s[0]=='o'&&s[1]=='n')cout<<"1\n";
		else if(s[1]=='n'&&s[2]=='e')cout<<"1\n";
		else if(s[2]=='e'&&s[0]=='o')cout<<"1\n";
		else cout<<"2\n";   
	}
}
return 0;
}

