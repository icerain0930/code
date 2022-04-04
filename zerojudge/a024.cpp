#include<bits/stdc++.h>
using namespace std;
//by icerain

int main(){
int t,a,b,i,k;
ios_base::sync_with_stdio(0);
cin.tie(0);
cin>>a>>b;
for(k=0;k<b;k++){
	for(i=1;i<=a&&i<=b;i++){
		if(a%i==0&&b%i==0){	
			t=i;
		}
	}
	cout<<t<<endl;
	break;
}
return 0;
}

