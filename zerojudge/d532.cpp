#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); // I/OÀu¤Æ
int a,b,sum;
cin>>a>>b;
for(int i=a;i<=b;i++){
	if((i%4==0 && i%100!=0)||(i%400==0))sum++;
}
cout<<sum;
return 0;
}

