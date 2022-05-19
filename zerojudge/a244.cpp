#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,a,b,c;
cin>>n;
for(int i=0;i<n;i++){
	cin>>a>>b>>c;
	if(a==1)cout<<b+c;
	if(a==2)cout<<b-c;
	if(a==3)cout<<b*c;
	if(a==4)cout<<b/c;
	cout<<"\n";
}
return 0;
}

