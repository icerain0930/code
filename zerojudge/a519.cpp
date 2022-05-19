#include<bits/stdc++.h>
using namespace std;
//by icerain
long long F[1000005];
long long f(int n){
	if(n==1)return 1;
	if(n==2)return 2;
	if(F[n])return F[n];
	return F[n]=f(n-1)+f(n-2);
}
int main(){
	int n;
	cin>>n;
	while(n!=0){
	cout<<f(n)<<endl;
	cin>>n;
	}
}
