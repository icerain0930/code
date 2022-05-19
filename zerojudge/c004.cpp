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
	if(a<b)cout<<"impossible\n";
	else{
		if((a+b)%2==0&&(a-b)%2==0){
			cout<<(a+b)/2<<" "<<(a-b)/2<<endl;
		}
		else cout<<"impossible\n";
	} 
}
return 0;
}

