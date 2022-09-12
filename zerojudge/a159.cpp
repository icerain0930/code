#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/O優化
int n;
cin>>n;
while(n--){
	int a,sum=0,t=0;
	for(int i=0;i<4;i++){//aaaa bbbb cccc dddd 共4組 
		cin>>a;
		for(int j=0;j<4;j++){
			if(j==1 || j==3){
				t=a%10;
				t*=2;
				sum+=t/10;
				sum+=t%10;
			} 
			else sum+=a%10;
			a=a/10;
		}
	}
	if(sum%10==0){
		cout<<"Valid\n";
	}
	else cout<<"Invalid\n";
}
return 0;
}
