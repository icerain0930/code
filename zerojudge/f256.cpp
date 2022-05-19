#include<bits/stdc++.h>
using namespace std;
//by icerain
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int g,c,tt=0,ct=0;
for(int i=0;i<2;i++){
	cin>>g>>c;
	tt=g*c+tt;
	ct=ct+c;
}
if((tt/ct)>=60){
cout<<"Oh wow! You pass it!"<<endl;
cout<<tt/ct;
} 
else cout<<"YEEEEEE!!!";
return 0;
}

