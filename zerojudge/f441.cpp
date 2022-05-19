#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,s,m;
cin>>n>>s;
int a[n],b[n];
for(int i=0;i<n;i++)cin>>a[i];
cin>>m; 
int t[m];
for(int j=0;j<m;j++){
	t[j]=0;
	for(int k=0;k<n;k++){
		cin>>b[k];
		if(b[k]==a[k])t[j]=t[j]+s;
	}
} 
for(int j=0;j<m;j++){
	cout<<t[j]<<endl;
} 
return 0;
}

