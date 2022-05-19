#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
int a,b,c,d;
while(cin>>n){
	for(int i=0;i<n;i++){
		cin>>a>>b>>c>>d;
		if(a){
			if(b){
				if(d)cout<<"D";
				else cout<<"F";
			}
			else cout<<"E";
		}
		else{
			if(b){
				if(c)cout<<"B";
				else cout<<"A";
			}
			else cout<<"C";
		} 
	}
	cout<<"\n";
}
return 0;
}
