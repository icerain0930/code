#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int len,t=0;
string a;
while(cin>>a){
	len=a.length();
	if(len==1&&a[0]=='0'){
	cout<<0<<endl;
	}
	else if(len==1&&a[0]=='1'){
	cout<<1<<endl; 
	}	
	else{
	for(int i=0;i<len;i++){
		if(a[i]=='0')t++;
		if(a[i]=='1'){
			t=t+pow(2,len-i);
		}
	}
	cout<<t<<endl;
	}
	t=0;
}
return 0;
}

