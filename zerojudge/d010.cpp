#include<bits/stdc++.h>
using namespace std;
//ZJ d010
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/O優化
int n,sum=0;
while(cin>>n){
	for(int i=1;i<n;i++){
		if(n%i == 0)sum+=i; 
	}
	//判斷 
	if(sum < n){
		cout<<"虧數\n";
	}
	else if(sum == n){
		cout<<"完全數\n";
	}
	else {
		cout<<"盈數\n";
	}
	sum=0;
}
return 0;
}
