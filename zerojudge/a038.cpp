#include<bits/stdc++.h>
using namespace std;
//by icerain
//zj a038
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
string s;
cin>>s;
int n=s.length();
int a[n];
for(int i=n-1;i<=0;i--){
	a[n-i]=s[n];
}

return 0;
}

