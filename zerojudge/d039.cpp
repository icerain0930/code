#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,a,b,a2,b2;
cin>>n;
for(int i=0;i<n;i++){
	cin>>a>>b;
	a=a-2;
	b=b-2;
	if(a%3==0)a2=a/3;
	else a2=a/3+1;
	if(b%3==0)b2=b/3;
	else b2=b/3+1;
	cout<<a2*b2<<endl;
}
return 0;
}

