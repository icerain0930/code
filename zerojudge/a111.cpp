#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n,sum=0;
cin>>n;
while(n!=0){
	for(int i=1;i<=n;i++){
		sum=sum+(i*i);
	}
	cout<<sum<<endl;
	sum=0;
	cin>>n;
} 
return 0;
}

