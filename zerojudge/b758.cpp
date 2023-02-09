#include<bits/stdc++.h>
using namespace std;
int main(){
	int h,m;
	cin>>h>>m;
	if(m>=30){
		m=m-30;
		h=h+3;
		if(h>=24)h=h-24;
	}
	else{
		m=m+30;
		h=h+2;
		if(h>=24)h=h-24;
	}
	if(h<10)cout<<"0"<<h<<":";
	else cout<<h<<":";
	if(m<10)cout<<"0"<<m<<" \n";
	else cout<<m<<endl;
}
