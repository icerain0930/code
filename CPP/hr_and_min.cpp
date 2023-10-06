#include<bits/stdc++.h>
using namespace std;
//求一天時針分針夾角為10度有幾次
//by icerain 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/O優化
int m=0,h=0,t;//m=min,h=hr,t=times
// a=angle ,6a = 1m ,360a = 60m
// 30a = 1h ,60m = 1h ,360a = 12h ,360a:30a = 12:1
while(h <= 360){
	if(m%12==0)h++;
	if(m==359){//一圈 
		m=0;
	}
	else m++;

	if(abs(h-m)==10)t++;
}
cout<<t*2;
return 0;
}
