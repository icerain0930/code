#include<bits/stdc++.h>
using namespace std;
//by icerain
//f345
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n; 
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int i=n-1;i>=0;i--){
	cout<<a[i]<<" ";
}
return 0;
}

