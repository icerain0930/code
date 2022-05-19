#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,a,b;
cin>>n;
for(int i=0;i<n;i++){
	cin>>a>>b;
	if(a>b)cout<<">\n";
	if(a<b)cout<<"<\n";
	if(a==b)cout<<"=\n"; 
}
return 0;
}

