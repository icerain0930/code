#include<bits/stdc++.h>
using namespace std;
//d086
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/O優化
string s;
while(cin>>s){
	if(s[0]=='0' && s.size()==1)break; //避免字串是0開頭 ex: 0abc 
	int n = s.size(),sum = 0;
	for(int i=0;i<n;i++){
		if('A'<= s[i] && s[i] <= 'Z'){
			sum += s[i] - 64;
		} 
		else if('a' <= s[i] && s[i] <= 'z'){
			sum += s[i] - 96;
		}
		else {
			sum = 0;
			cout<<"Fail\n";
			break;
		}
	}
	if(sum)cout<<sum<<endl;
}
return 0;
}
