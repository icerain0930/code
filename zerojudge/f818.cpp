#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
int a[n],b[n],min,test;
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int j=0;j<n;j++){
	cin>>b[j];
}
min=a[0]*b[0];
test=0;
for(int k=0;k<n;k++){
	if(a[k]*b[k]<=min){
		min=a[k]*b[k];
		test=k;
	}
}
cout<<a[test]<<" "<<b[test];

return 0;
}

