#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/OÀu¤Æ
int a,b,sum=0,t=0;
while(cin>>a>>b){
	sum=sum+a*b;
	t=t+b;
}
if(sum/t >= 60)cout<<"Oh wow! You pass it!\n"<<sum/t;
else cout<<"YEEEEEE!!!";
return 0;
}

