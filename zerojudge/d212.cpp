#include<bits/stdc++.h>
using namespace std;
//by icerain
long long f(long long n){
	if(n==1)return 1;
	else if(n==2)return 2;
	else return f(n-1)+f(n-2);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
long long n;

while(cin>>n){	
cout<<f(n)<<endl;
}
return 0;
}
//need DP ¶O 

